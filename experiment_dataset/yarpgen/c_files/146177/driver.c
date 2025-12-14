#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47423;
unsigned long long int var_2 = 1024029571870998747ULL;
unsigned long long int var_3 = 15809167478225886216ULL;
unsigned long long int var_4 = 13990960304693023390ULL;
unsigned long long int var_5 = 8838517073976517214ULL;
unsigned long long int var_7 = 7594601057659314541ULL;
unsigned short var_9 = (unsigned short)10563;
unsigned long long int var_11 = 3278415881137855957ULL;
unsigned long long int var_13 = 11495233650872539167ULL;
unsigned long long int var_14 = 13137011590846757119ULL;
unsigned long long int var_15 = 15418301155209040071ULL;
unsigned long long int var_16 = 15154462873875696482ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)49085;
unsigned short var_18 = (unsigned short)4960;
unsigned long long int var_19 = 8685342271510376826ULL;
unsigned long long int var_20 = 3951188526457827623ULL;
unsigned short var_21 = (unsigned short)21234;
unsigned short var_22 = (unsigned short)57066;
unsigned long long int var_23 = 17199939267077588898ULL;
unsigned short var_24 = (unsigned short)23306;
unsigned short var_25 = (unsigned short)61328;
unsigned short var_26 = (unsigned short)11931;
unsigned long long int arr_0 [10] ;
unsigned short arr_1 [10] [10] ;
unsigned short arr_3 [18] ;
unsigned long long int arr_4 [18] [18] ;
unsigned long long int arr_6 [18] ;
unsigned short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3051153978998495261ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)29661;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)14686;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 2616530667662013032ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 10293682097511447076ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)35177;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
