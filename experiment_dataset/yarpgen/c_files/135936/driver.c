#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)42377;
unsigned int var_4 = 2664621575U;
int var_6 = 331824004;
unsigned short var_7 = (unsigned short)48661;
unsigned short var_8 = (unsigned short)5488;
unsigned short var_9 = (unsigned short)38257;
unsigned int var_11 = 1658612090U;
unsigned int var_12 = 4000365940U;
int var_13 = -1131572745;
int var_14 = -1144793074;
int var_15 = 1267308288;
int var_16 = 392303601;
int zero = 0;
int var_17 = 1805656820;
unsigned int var_18 = 4213770199U;
unsigned int var_19 = 1045722728U;
int var_20 = 217462902;
int var_21 = 114452022;
unsigned int var_22 = 3372879355U;
int var_23 = -1400811517;
unsigned int var_24 = 3164456308U;
unsigned int var_25 = 848842533U;
int var_26 = 1961279606;
int var_27 = -1677681252;
int var_28 = 755443195;
int var_29 = 1738987943;
unsigned short var_30 = (unsigned short)49158;
unsigned int var_31 = 3219061401U;
int arr_0 [13] ;
int arr_1 [13] [13] ;
int arr_2 [13] [13] ;
unsigned int arr_3 [13] ;
int arr_4 [13] ;
int arr_5 [13] [13] [13] ;
int arr_6 [13] [13] [13] [13] ;
unsigned short arr_7 [13] [13] ;
int arr_9 [13] [13] [13] ;
unsigned short arr_10 [13] [13] ;
int arr_11 [13] ;
unsigned int arr_12 [13] ;
int arr_18 [20] ;
int arr_19 [20] [20] ;
int arr_20 [20] ;
int arr_8 [13] [13] [13] ;
unsigned int arr_13 [13] [13] ;
unsigned short arr_16 [13] ;
int arr_17 [13] ;
unsigned short arr_21 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -950890978;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1947820037;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -798516221 : -1943581005;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 2447172019U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -866219761;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1601877289;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -312562052 : 1010585531;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)27970;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -1357685509;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)25440 : (unsigned short)60185;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -1228466533 : -2125360850;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 1764450548U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = 1078160930;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = -784176157;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = -1010186731;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -655378361 : -771121136;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 3102832016U : 116861725U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14840 : (unsigned short)2771;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 1799675583 : -1987003131;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11300 : (unsigned short)21992;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
