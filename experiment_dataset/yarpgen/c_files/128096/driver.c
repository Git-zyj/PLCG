#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24685;
short var_1 = (short)19975;
int var_2 = -503822499;
short var_4 = (short)13678;
int var_5 = 2103982999;
unsigned long long int var_6 = 1449529678728445169ULL;
short var_7 = (short)-6986;
signed char var_8 = (signed char)-24;
short var_9 = (short)29677;
long long int var_10 = 1528696235985477790LL;
unsigned short var_11 = (unsigned short)34066;
int zero = 0;
int var_12 = 248343725;
unsigned int var_13 = 1657944415U;
unsigned long long int var_14 = 3866716469270194603ULL;
long long int var_15 = -6502420237840245276LL;
short var_16 = (short)-26594;
unsigned short arr_0 [23] [23] ;
unsigned short arr_6 [23] [23] ;
short arr_9 [23] [23] ;
signed char arr_3 [23] ;
long long int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)14612;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)4780 : (unsigned short)36257;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)20438 : (short)-23152;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1305507813726895420LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
