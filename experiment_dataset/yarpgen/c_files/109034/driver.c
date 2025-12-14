#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -190369449;
unsigned char var_1 = (unsigned char)29;
long long int var_2 = 7972945496103932131LL;
unsigned char var_3 = (unsigned char)31;
unsigned short var_5 = (unsigned short)37122;
unsigned long long int var_6 = 34192499013389623ULL;
unsigned long long int var_7 = 13360373231413609486ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)44032;
unsigned char var_10 = (unsigned char)159;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)55;
_Bool var_15 = (_Bool)0;
int var_17 = 708149984;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)-27573;
int var_20 = -1303084348;
unsigned int var_21 = 3387320443U;
long long int var_22 = -7834171668343239122LL;
short var_23 = (short)-32409;
short var_24 = (short)-5699;
int var_25 = -1640355839;
short var_26 = (short)-19460;
unsigned short var_27 = (unsigned short)23123;
short var_28 = (short)6948;
long long int var_29 = -5292011164111262611LL;
unsigned short var_30 = (unsigned short)24080;
_Bool var_31 = (_Bool)1;
unsigned long long int var_32 = 553765083679038364ULL;
long long int var_33 = 4561199203384649163LL;
unsigned char var_34 = (unsigned char)227;
_Bool var_35 = (_Bool)1;
signed char var_36 = (signed char)-87;
unsigned int var_37 = 1840137035U;
unsigned long long int var_38 = 16748134687140088325ULL;
_Bool arr_3 [12] [12] [12] ;
long long int arr_10 [12] ;
unsigned char arr_19 [12] [12] [12] [12] [12] ;
signed char arr_23 [12] [12] [12] [12] [12] ;
unsigned char arr_27 [25] ;
short arr_28 [25] [25] ;
unsigned long long int arr_29 [25] ;
unsigned long long int arr_31 [19] [19] ;
signed char arr_32 [19] ;
_Bool arr_34 [19] [19] ;
unsigned short arr_36 [19] [19] [19] ;
unsigned short arr_39 [19] ;
unsigned char arr_8 [12] ;
short arr_11 [12] [12] ;
unsigned char arr_24 [12] [12] [12] [12] [12] ;
short arr_25 [12] ;
_Bool arr_26 [12] [12] ;
unsigned int arr_37 [19] ;
unsigned int arr_38 [19] [19] ;
unsigned long long int arr_42 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = 4503176247873404261LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)125 : (signed char)10;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_28 [i_0] [i_1] = (short)-15095;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = 17645600148483373622ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_31 [i_0] [i_1] = 3789781775714677352ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_32 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_34 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned short)59495;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? (unsigned short)20760 : (unsigned short)3791;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-17125 : (short)-26007;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)8 : (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (short)-10492;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_26 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_37 [i_0] = 1790136969U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_38 [i_0] [i_1] = 2085659056U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? 762357577936535580ULL : 17279382775757703107ULL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_42 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
