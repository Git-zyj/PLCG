#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -153379298;
unsigned long long int var_1 = 12806085220369386964ULL;
unsigned long long int var_2 = 5058930590536757497ULL;
signed char var_3 = (signed char)-103;
long long int var_4 = -6221004330279369519LL;
unsigned long long int var_5 = 14577528425586562910ULL;
int var_6 = 1237436305;
unsigned int var_7 = 364370726U;
unsigned long long int var_8 = 999283395717171320ULL;
int var_9 = 305909132;
unsigned short var_11 = (unsigned short)11716;
int zero = 0;
int var_12 = 1709372000;
int var_13 = -1047411888;
short var_14 = (short)-23469;
_Bool var_15 = (_Bool)1;
long long int arr_0 [12] ;
int arr_1 [12] ;
unsigned long long int arr_3 [23] ;
unsigned long long int arr_4 [23] [23] ;
short arr_2 [12] ;
int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 355431419710230734LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -335526591;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 8162283466749699626ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 921737117098614291ULL : 17523554186645704757ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)7421;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -1384747076 : 336913667;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
