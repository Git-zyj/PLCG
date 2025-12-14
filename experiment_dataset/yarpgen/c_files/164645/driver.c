#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)135;
unsigned long long int var_5 = 3298545177619726431ULL;
unsigned short var_8 = (unsigned short)31752;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)95;
unsigned char var_13 = (unsigned char)25;
unsigned int var_14 = 3872633794U;
unsigned int var_16 = 1943834870U;
unsigned int var_17 = 2772135100U;
unsigned long long int var_18 = 14973864236407833259ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)16;
unsigned char var_20 = (unsigned char)41;
unsigned short var_21 = (unsigned short)60690;
int var_22 = -1029303187;
int var_23 = 2135364069;
signed char var_24 = (signed char)-7;
unsigned int var_25 = 1717279520U;
int var_26 = -1777379061;
int var_27 = 2063777384;
short var_28 = (short)-6623;
int var_29 = 288722225;
short arr_2 [16] [16] ;
unsigned short arr_4 [23] [23] ;
short arr_5 [23] ;
unsigned short arr_7 [23] ;
unsigned int arr_10 [15] [15] ;
unsigned long long int arr_11 [15] ;
unsigned int arr_14 [15] [15] ;
_Bool arr_8 [23] ;
short arr_15 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-22727;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)19698;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)20774;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)30672;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = 4240401710U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = 9031359478652615423ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = 3001629556U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-31570 : (short)-9702;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
