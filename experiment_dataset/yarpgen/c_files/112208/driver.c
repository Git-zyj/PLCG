#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1395691928U;
int var_4 = 2022072970;
unsigned int var_9 = 1906046764U;
unsigned short var_10 = (unsigned short)56437;
unsigned char var_11 = (unsigned char)138;
int var_12 = -362541162;
unsigned int var_13 = 2674440659U;
unsigned int var_14 = 564784917U;
long long int var_16 = -3038691638563039258LL;
int zero = 0;
unsigned short var_20 = (unsigned short)9083;
short var_21 = (short)-17611;
unsigned int var_22 = 721937240U;
unsigned short var_23 = (unsigned short)43594;
unsigned int var_24 = 2780502222U;
long long int arr_0 [22] ;
short arr_2 [22] ;
long long int arr_3 [22] ;
unsigned char arr_4 [22] [22] ;
int arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1091658386849537986LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)1882;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 505826912670515381LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -142892619 : -797343337;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
