#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)2559;
short var_8 = (short)9130;
short var_9 = (short)-8611;
signed char var_13 = (signed char)-108;
long long int var_14 = 7764663009768229165LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = -1874812648;
unsigned long long int var_17 = 7730238379717667197ULL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)25575;
signed char var_20 = (signed char)117;
long long int var_21 = -7968578087735170643LL;
int var_22 = 1329888317;
long long int var_23 = -2912870819997162117LL;
unsigned long long int var_24 = 2106224543568465397ULL;
short var_25 = (short)19118;
unsigned char var_26 = (unsigned char)138;
signed char var_27 = (signed char)103;
unsigned long long int var_28 = 15812640538853055687ULL;
int arr_0 [16] ;
int arr_1 [16] ;
int arr_2 [16] [16] ;
int arr_3 [16] [16] [16] ;
long long int arr_4 [16] [16] ;
unsigned short arr_6 [10] ;
unsigned long long int arr_10 [10] ;
short arr_11 [10] [10] [10] ;
signed char arr_12 [10] [10] [10] ;
_Bool arr_14 [24] [24] ;
int arr_15 [24] ;
int arr_17 [15] ;
signed char arr_19 [15] ;
unsigned short arr_5 [16] [16] [16] ;
short arr_8 [10] ;
signed char arr_16 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -569205144;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 549677829;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -602170684;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1971917548;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 2189473620090260380LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37333 : (unsigned short)47031;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 17351373108532562967ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-22533;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-63 : (signed char)117;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = 186554863;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = 359450317;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)56047;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-22231 : (short)-8016;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)-57;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
