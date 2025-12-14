#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)95;
long long int var_4 = -8692446052027479544LL;
long long int var_5 = -940084383738198877LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 27722546174481117ULL;
unsigned char var_8 = (unsigned char)88;
unsigned short var_9 = (unsigned short)19811;
long long int var_11 = -5069430160150350637LL;
int zero = 0;
long long int var_12 = -2763783612651423805LL;
long long int var_13 = 4208676940762971584LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1858488610U;
long long int var_16 = 1885751717542973863LL;
short var_17 = (short)-7594;
signed char var_18 = (signed char)24;
int arr_0 [20] ;
long long int arr_1 [20] [20] ;
unsigned short arr_5 [20] [20] [20] ;
unsigned long long int arr_8 [20] [20] ;
unsigned int arr_3 [20] ;
signed char arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 372037853;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 6747316406428496434LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)19835;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 7861949038868328628ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3286718051U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)11;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
