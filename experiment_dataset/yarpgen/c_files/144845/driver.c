#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1185617068;
unsigned char var_5 = (unsigned char)200;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)17;
unsigned char var_8 = (unsigned char)56;
unsigned char var_9 = (unsigned char)215;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 14224655943410071837ULL;
int zero = 0;
long long int var_15 = -5540607640676765498LL;
unsigned long long int var_16 = 3706393740529441541ULL;
int var_17 = -1714090416;
unsigned int arr_0 [11] [11] ;
long long int arr_1 [11] ;
long long int arr_2 [11] [11] ;
signed char arr_3 [11] [11] [11] ;
short arr_4 [11] ;
unsigned char arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 1860132775U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 8149454512695452560LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = -5389646939496444133LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (short)30741;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)141;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
