#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5155665360924490874LL;
int var_3 = -936045032;
unsigned char var_4 = (unsigned char)3;
long long int var_5 = -3601896084445225433LL;
unsigned int var_8 = 4090673056U;
unsigned short var_9 = (unsigned short)16504;
unsigned short var_10 = (unsigned short)43790;
_Bool var_11 = (_Bool)1;
short var_12 = (short)14237;
int zero = 0;
unsigned int var_13 = 3059113583U;
signed char var_14 = (signed char)50;
unsigned short var_15 = (unsigned short)27167;
_Bool var_16 = (_Bool)0;
unsigned short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)60947;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
