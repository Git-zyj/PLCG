#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14213;
short var_2 = (short)-1422;
int var_4 = 1612227210;
unsigned char var_7 = (unsigned char)79;
short var_8 = (short)-560;
short var_9 = (short)-15571;
unsigned char var_11 = (unsigned char)163;
long long int var_13 = -5718585997587979799LL;
int zero = 0;
int var_14 = -1518505440;
short var_15 = (short)13410;
unsigned char var_16 = (unsigned char)185;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)33;
long long int var_20 = -5631294579466426269LL;
_Bool arr_0 [15] ;
signed char arr_2 [15] ;
int arr_3 [15] ;
int arr_4 [15] [15] ;
short arr_5 [15] ;
short arr_9 [15] ;
long long int arr_12 [15] ;
_Bool arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -1541067105;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 887417137;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)-17808;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (short)1891;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = -4390979070530112028LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
