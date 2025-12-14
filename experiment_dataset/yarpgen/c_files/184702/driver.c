#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -481725802;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
int var_4 = 417637761;
unsigned char var_5 = (unsigned char)220;
int var_6 = 508852826;
unsigned int var_8 = 2385539401U;
int var_9 = -122091562;
int var_10 = -1414591862;
unsigned int var_11 = 3092666756U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2668158594U;
short var_14 = (short)5721;
unsigned int var_15 = 2270055909U;
unsigned long long int var_16 = 12647414309353154699ULL;
short var_17 = (short)-14652;
unsigned short var_18 = (unsigned short)5269;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 10645484676995599066ULL;
int var_21 = 1818374790;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)176;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)137;
short var_26 = (short)-17734;
unsigned long long int arr_6 [22] [22] [22] [22] ;
unsigned long long int arr_7 [22] [22] ;
unsigned long long int arr_13 [15] ;
short arr_14 [15] ;
int arr_22 [15] [15] [15] [15] ;
_Bool arr_10 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4275060397963247601ULL : 17965986738914667327ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 2800783112477457958ULL : 383524643266735632ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 8125429163682075848ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (short)26049;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 887307310;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
