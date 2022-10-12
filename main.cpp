// NAMA		: Tabitha Natasya Cyntia Dewi
// NRP		: 5024221008
// Jurusan	: Teknik Komputer

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

using namespace std;

float mencari_V0(int r, int s)
{
	float Vakhir;
    
    Vakhir = sqrt(10 * r) + s;
    
  	return Vakhir;
}

int speed_dgn_loss(int Vakhir)
{
    int Vawal;
    
    if(Vakhir >= 1 && Vakhir <= 10){
        Vawal = Vakhir - 1;
    }else if(Vakhir >= 11 && Vakhir <= 20){
        Vawal = Vakhir - 3;
    }else if(Vakhir >= 21 && Vakhir <= 30){
        Vawal = Vakhir - 5;
    } 
    
    return Vawal;
}

int main() {
    /* tulis kode utama kalian disini */
    int Vakhir, r;
    
  	/* input adalah kecepatan tangensial maksimum roller */
  	cin >> Vakhir;
    
    int Vawal = speed_dgn_loss(Vakhir);
    
    r = pow(Vawal,2)/10;
    
    float Vakhirn = mencari_V0(r, Vakhir - Vawal);
  
  	cout << r << " " << Vakhirn << endl;
    return 0;
}