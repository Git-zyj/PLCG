#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63577;
long long int var_1 = -2326368622543945214LL;
long long int var_2 = -3677601060000087708LL;
unsigned short var_3 = (unsigned short)24642;
unsigned long long int var_4 = 9300621533427714114ULL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-23340;
int var_8 = -1289105504;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 29205331207803262ULL;
unsigned char var_12 = (unsigned char)105;
unsigned char var_13 = (unsigned char)21;
unsigned long long int var_14 = 7556367994818732324ULL;
short var_15 = (short)-10211;
short var_16 = (short)-20817;
unsigned long long int var_17 = 7591623259619144128ULL;
short var_18 = (short)-32117;
unsigned short var_19 = (unsigned short)44366;
int var_20 = 61920686;
unsigned long long int var_21 = 13077929583746780116ULL;
unsigned char var_22 = (unsigned char)94;
unsigned long long int var_23 = 7802016740939657673ULL;
signed char var_24 = (signed char)25;
short var_25 = (short)-12408;
unsigned char var_26 = (unsigned char)78;
short var_27 = (short)-12553;
int var_28 = 642790905;
unsigned long long int var_29 = 9046826595567229604ULL;
int var_30 = 16744277;
short var_31 = (short)-9555;
signed char arr_0 [13] [13] ;
short arr_1 [13] [13] ;
unsigned short arr_4 [13] ;
short arr_5 [13] ;
unsigned long long int arr_6 [13] [13] ;
unsigned long long int arr_9 [13] ;
int arr_11 [13] [13] [13] [13] ;
short arr_16 [13] [13] [13] ;
unsigned long long int arr_25 [15] [15] ;
unsigned short arr_28 [25] ;
long long int arr_29 [25] ;
long long int arr_13 [13] [13] [13] ;
unsigned char arr_20 [13] ;
int arr_21 [13] ;
short arr_38 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)7867;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)61594;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (short)-9377;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 8506726846677696171ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 6857507288976857385ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 145764650;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)31813;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = 7985523613638822525ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (unsigned short)36122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = 1358913371062657798LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -2301003884807781580LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = -1694144043;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? (short)12836 : (short)31588;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
