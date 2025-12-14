#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
int var_3 = -1027941762;
unsigned long long int var_6 = 14063225550086759242ULL;
long long int var_8 = -3270868279608244090LL;
unsigned long long int var_9 = 56079158746690293ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 6506122666074085364ULL;
unsigned int var_12 = 2226990075U;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)39739;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_20 = -1545753267;
_Bool var_21 = (_Bool)0;
long long int var_22 = 1731182504464712202LL;
unsigned long long int var_23 = 2871062268243811875ULL;
_Bool var_24 = (_Bool)1;
unsigned long long int arr_5 [11] [11] [11] ;
unsigned long long int arr_10 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 15011430777641610637ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 15395458559592990105ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
