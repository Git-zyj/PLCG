#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)233;
unsigned short var_3 = (unsigned short)49254;
int var_6 = 1328717398;
signed char var_7 = (signed char)-76;
long long int var_9 = -8218035793404143242LL;
long long int var_10 = -3086057250372865113LL;
unsigned long long int var_15 = 3021116151633535214ULL;
int zero = 0;
unsigned long long int var_19 = 6659087908773768057ULL;
short var_20 = (short)5911;
unsigned long long int var_21 = 18077468140453119637ULL;
unsigned char var_22 = (unsigned char)160;
unsigned long long int var_23 = 12422550350655260446ULL;
int var_24 = 1911501287;
unsigned short var_25 = (unsigned short)63467;
unsigned long long int var_26 = 17238237657111459768ULL;
short var_27 = (short)12073;
int var_28 = 784215167;
signed char arr_0 [11] ;
long long int arr_1 [11] [11] ;
unsigned short arr_7 [23] ;
signed char arr_8 [23] [23] ;
unsigned short arr_11 [11] [11] ;
long long int arr_12 [11] ;
unsigned char arr_13 [11] [11] ;
unsigned long long int arr_15 [11] [11] ;
short arr_2 [11] ;
long long int arr_3 [11] ;
unsigned short arr_4 [11] ;
unsigned short arr_5 [11] [11] ;
long long int arr_6 [11] ;
long long int arr_9 [23] ;
unsigned long long int arr_16 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 1324634591077129288LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)5349;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-11 : (signed char)82;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)12920;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = -7132128119604371684LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = 12209362525419521809ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-24292;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2160477028344444425LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)46056;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)53790;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = -7476354849620467097LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 2722299161749770739LL : 2674866340098086181LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 571623794881168850ULL : 2636931187574513402ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
