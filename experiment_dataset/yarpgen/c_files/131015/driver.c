#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24131;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 1393775670307134017ULL;
unsigned long long int var_3 = 7924554384875740743ULL;
short var_4 = (short)-32703;
unsigned short var_5 = (unsigned short)45277;
signed char var_6 = (signed char)-104;
unsigned char var_7 = (unsigned char)59;
long long int var_10 = 5121318161290916072LL;
int zero = 0;
int var_11 = -1440966266;
unsigned int var_12 = 743909782U;
unsigned long long int var_13 = 10051359460459204872ULL;
unsigned long long int var_14 = 15156822733527558853ULL;
unsigned int var_15 = 3762303078U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)40955;
short var_18 = (short)-4073;
unsigned long long int var_19 = 6795751284666781808ULL;
unsigned char var_20 = (unsigned char)3;
unsigned short var_21 = (unsigned short)8774;
signed char var_22 = (signed char)-53;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 11750430886508860759ULL;
int var_25 = -616551223;
unsigned char var_26 = (unsigned char)182;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 11706857841835943049ULL;
_Bool var_29 = (_Bool)1;
long long int arr_0 [20] ;
long long int arr_1 [20] [20] ;
int arr_2 [20] ;
short arr_3 [20] [20] ;
int arr_4 [20] [20] ;
short arr_5 [20] [20] ;
long long int arr_8 [20] [20] [20] ;
unsigned short arr_9 [20] [20] ;
unsigned short arr_12 [20] [20] ;
short arr_13 [20] [20] [20] ;
long long int arr_15 [20] [20] [20] ;
unsigned long long int arr_16 [20] [20] [20] [20] ;
_Bool arr_18 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -5218069291836626846LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 5896683653551715142LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -1080895097;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-18517 : (short)-19887;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = -295391644;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-16977 : (short)-24292;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -2028895369219162593LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)700;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)19834;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)30611;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -8889585227453741749LL : 6627603689315126942LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 3228518149040884051ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
