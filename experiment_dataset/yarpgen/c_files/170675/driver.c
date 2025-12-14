#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)61845;
unsigned char var_6 = (unsigned char)201;
short var_7 = (short)21486;
long long int var_9 = 2657472971662630560LL;
unsigned short var_10 = (unsigned short)33827;
unsigned int var_11 = 2846505606U;
int zero = 0;
long long int var_12 = -3097301889185772231LL;
unsigned int var_13 = 384515855U;
signed char var_14 = (signed char)85;
_Bool var_15 = (_Bool)0;
int var_16 = -121910978;
short var_17 = (short)14662;
long long int var_18 = 4876085323440739208LL;
long long int var_19 = 5263799069578748194LL;
unsigned char arr_4 [15] [15] ;
unsigned int arr_10 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = 4062181678U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
