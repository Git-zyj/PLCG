#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
short var_1 = (short)-1732;
unsigned long long int var_2 = 13606611567889185567ULL;
unsigned char var_3 = (unsigned char)213;
unsigned long long int var_5 = 4044855487185253152ULL;
unsigned short var_6 = (unsigned short)51296;
short var_8 = (short)24605;
unsigned char var_10 = (unsigned char)119;
int zero = 0;
short var_12 = (short)-5113;
short var_13 = (short)29407;
unsigned long long int var_14 = 5092349235717149711ULL;
unsigned char var_15 = (unsigned char)139;
signed char var_16 = (signed char)66;
short var_17 = (short)-15733;
short var_18 = (short)-5586;
unsigned short var_19 = (unsigned short)24905;
unsigned char var_20 = (unsigned char)160;
signed char var_21 = (signed char)66;
unsigned char var_22 = (unsigned char)106;
_Bool var_23 = (_Bool)0;
long long int var_24 = -4813738908395211895LL;
_Bool arr_0 [16] [16] ;
unsigned int arr_1 [16] ;
unsigned char arr_2 [16] ;
short arr_5 [16] ;
unsigned int arr_6 [16] [16] ;
unsigned long long int arr_13 [16] [16] [16] ;
unsigned char arr_17 [24] ;
long long int arr_18 [24] [24] ;
unsigned char arr_3 [16] ;
unsigned long long int arr_4 [16] [16] ;
signed char arr_7 [16] [16] ;
long long int arr_14 [16] ;
unsigned long long int arr_15 [16] [16] [16] ;
signed char arr_16 [16] [16] ;
signed char arr_19 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3751589490U : 1025621055U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (short)11112;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 1716269506U : 2309665809U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9906496596209818347ULL : 15447322548273859597ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = -3997936043312694632LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)79 : (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 13532161581031507236ULL : 15557002866146695691ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-10 : (signed char)-19;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 5533043758978198122LL : -254406988619737711LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13582251296430439880ULL : 5826021507505302871ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)102 : (signed char)-2;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (signed char)90;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
