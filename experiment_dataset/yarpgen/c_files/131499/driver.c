#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61221;
int var_1 = 968645451;
short var_2 = (short)32047;
signed char var_4 = (signed char)30;
_Bool var_5 = (_Bool)1;
short var_6 = (short)12683;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 5379192712770542477ULL;
short var_12 = (short)-13795;
long long int var_13 = -8416696645212955443LL;
unsigned int var_14 = 818141600U;
int zero = 0;
unsigned char var_15 = (unsigned char)49;
int var_16 = 788503181;
unsigned char var_17 = (unsigned char)146;
_Bool var_18 = (_Bool)0;
short var_19 = (short)32658;
unsigned char var_20 = (unsigned char)100;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)249;
unsigned char var_23 = (unsigned char)21;
short arr_3 [23] ;
unsigned int arr_4 [23] [23] ;
int arr_8 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-11985 : (short)-13230;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 95406570U : 1113346675U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -1776684480 : -961410029;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
