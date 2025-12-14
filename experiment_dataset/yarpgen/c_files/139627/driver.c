#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16833;
unsigned int var_2 = 1339958158U;
unsigned int var_5 = 821177137U;
signed char var_7 = (signed char)-91;
signed char var_11 = (signed char)31;
unsigned int var_12 = 1068455158U;
int var_17 = -816414121;
int zero = 0;
long long int var_18 = 872400100738151258LL;
int var_19 = 788712273;
short var_20 = (short)-875;
short var_21 = (short)12760;
unsigned int var_22 = 2678878487U;
short var_23 = (short)-7942;
unsigned long long int var_24 = 9903041154254372041ULL;
int var_25 = -1538176527;
unsigned int var_26 = 793151068U;
short arr_0 [22] [22] ;
unsigned long long int arr_2 [22] [22] ;
unsigned int arr_5 [22] ;
unsigned int arr_9 [25] ;
int arr_10 [25] [25] ;
_Bool arr_11 [25] [25] ;
int arr_12 [25] [25] [25] ;
long long int arr_13 [25] [25] [25] ;
short arr_15 [22] ;
short arr_20 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-911;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 9276458122073050261ULL : 2296538154894749672ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1891705916U : 788707632U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1376432391U : 3673010780U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? -1190758831 : 286709713;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -399736130 : -37324421;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -2172246061733436829LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (short)-18457;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (short)-4069;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
