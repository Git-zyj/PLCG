#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2677916884760581595LL;
unsigned long long int var_3 = 3955377654541868228ULL;
unsigned char var_4 = (unsigned char)168;
unsigned char var_5 = (unsigned char)230;
signed char var_6 = (signed char)61;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)97;
unsigned int var_10 = 1736325033U;
signed char var_11 = (signed char)-56;
int var_12 = 657188531;
unsigned int var_15 = 1826924669U;
short var_16 = (short)-14139;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)9153;
signed char var_19 = (signed char)73;
int zero = 0;
unsigned int var_20 = 3892450379U;
unsigned char var_21 = (unsigned char)30;
unsigned short var_22 = (unsigned short)14359;
long long int var_23 = -9153403980860548153LL;
unsigned short var_24 = (unsigned short)58091;
signed char var_25 = (signed char)29;
short var_26 = (short)-16660;
unsigned int var_27 = 1466499277U;
short var_28 = (short)12865;
unsigned short var_29 = (unsigned short)17873;
unsigned int var_30 = 3642367403U;
long long int arr_1 [19] ;
unsigned char arr_2 [19] ;
unsigned short arr_4 [22] [22] ;
_Bool arr_6 [22] [22] ;
unsigned int arr_10 [22] ;
unsigned int arr_11 [22] [22] [22] [22] ;
long long int arr_14 [22] [22] ;
short arr_23 [22] [22] [22] [22] [22] ;
long long int arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 8063065536508663433LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)49010;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 2168611216U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 2641310359U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = -5700518889377889905LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-18652;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 6370164460222973425LL : -1766527876146998308LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
