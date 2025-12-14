#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5805560401817829934ULL;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-5324;
unsigned int var_6 = 1123634946U;
short var_9 = (short)14558;
short var_12 = (short)-20628;
int var_14 = -519699947;
_Bool var_15 = (_Bool)1;
unsigned long long int var_17 = 1677104995100842098ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-6243;
_Bool var_21 = (_Bool)0;
short arr_4 [23] [23] ;
int arr_5 [23] ;
short arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)23977 : (short)-14867;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1193773548 : -2010177079;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-5432 : (short)-31144;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
