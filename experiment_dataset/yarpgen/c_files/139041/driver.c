#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-5903;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 25641720U;
unsigned int var_5 = 2482936327U;
short var_6 = (short)2965;
signed char var_7 = (signed char)-95;
short var_10 = (short)-10262;
signed char var_11 = (signed char)-14;
int var_13 = -1103938426;
int var_14 = 988760121;
int zero = 0;
unsigned long long int var_17 = 16008948491615016030ULL;
long long int var_18 = -4646951527841411704LL;
unsigned long long int var_19 = 519316192104554609ULL;
short var_20 = (short)3772;
unsigned long long int var_21 = 10672681841407991202ULL;
unsigned short var_22 = (unsigned short)21441;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-31202;
long long int var_25 = -707471160358341109LL;
int var_26 = 1626962027;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 946674882U;
unsigned char var_29 = (unsigned char)7;
int var_30 = 1204916965;
short var_31 = (short)30344;
int arr_0 [23] [23] ;
_Bool arr_2 [23] ;
int arr_6 [23] [23] [23] [23] ;
int arr_10 [23] [23] ;
unsigned int arr_11 [23] ;
short arr_18 [25] ;
unsigned int arr_19 [25] [25] ;
unsigned int arr_3 [23] [23] ;
short arr_8 [23] ;
signed char arr_20 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -1641800903;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 299124786;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = -298816746;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 3198177628U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (short)-4079;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = 4193323914U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 2495732001U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)13354;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)-36;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
