#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
unsigned int var_2 = 2418739077U;
unsigned long long int var_3 = 15099294918556996399ULL;
int var_4 = -1005838516;
int var_5 = 1207836726;
int var_6 = 236896703;
unsigned int var_8 = 3236869266U;
unsigned int var_9 = 3734473340U;
unsigned long long int var_10 = 4904914357006476068ULL;
short var_11 = (short)-14752;
unsigned char var_12 = (unsigned char)29;
int zero = 0;
short var_13 = (short)29859;
int var_14 = -1816225140;
unsigned long long int var_15 = 16645083663718611397ULL;
unsigned int var_16 = 4056059896U;
unsigned char var_17 = (unsigned char)30;
long long int var_18 = 1516721441736609763LL;
unsigned long long int var_19 = 6473893810290816974ULL;
unsigned short var_20 = (unsigned short)15308;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)52707;
unsigned long long int var_23 = 5515575146865211515ULL;
short var_24 = (short)-16389;
signed char var_25 = (signed char)17;
unsigned short arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned long long int arr_3 [22] [22] [22] ;
unsigned int arr_4 [22] [22] [22] ;
unsigned int arr_5 [22] [22] [22] ;
unsigned long long int arr_6 [22] [22] ;
short arr_9 [23] ;
unsigned short arr_10 [23] ;
long long int arr_11 [23] ;
signed char arr_13 [19] ;
unsigned char arr_16 [19] ;
long long int arr_19 [19] ;
short arr_2 [22] ;
unsigned long long int arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)35224;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3951094923081450468ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3180986619U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1272156127U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 15221040272906589200ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (short)-24394;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64908 : (unsigned short)28840;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = -6658141120305533307LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = -3882732181613172528LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-17664;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 1239355738198564730ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
