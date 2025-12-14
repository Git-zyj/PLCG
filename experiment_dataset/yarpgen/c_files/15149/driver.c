#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 3433756462U;
long long int var_4 = 730081656563600971LL;
short var_12 = (short)-31074;
unsigned char var_13 = (unsigned char)99;
long long int var_16 = -5662417427170360482LL;
unsigned char var_17 = (unsigned char)141;
int zero = 0;
unsigned char var_19 = (unsigned char)199;
unsigned long long int var_20 = 15227056371443516223ULL;
unsigned long long int var_21 = 7119831441246287079ULL;
unsigned long long int var_22 = 2264385875107429997ULL;
unsigned long long int var_23 = 10405722408983000478ULL;
long long int var_24 = -2774176600423841383LL;
unsigned short arr_2 [13] [13] ;
unsigned int arr_7 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)8636;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 911928571U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
