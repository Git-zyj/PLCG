#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4530;
short var_1 = (short)-31166;
unsigned int var_5 = 839738610U;
long long int var_6 = 6570092406208911687LL;
unsigned long long int var_7 = 15487398390259792827ULL;
unsigned int var_8 = 1232000042U;
long long int var_9 = -1560813688704182940LL;
int var_11 = 522817862;
int zero = 0;
short var_12 = (short)-18864;
unsigned int var_13 = 3020975369U;
signed char var_14 = (signed char)102;
unsigned int var_15 = 2456768931U;
long long int var_16 = -4197207707786683151LL;
unsigned int var_17 = 3963581656U;
int var_18 = -951899378;
int var_19 = -950871368;
long long int arr_0 [19] [19] ;
long long int arr_2 [20] [20] ;
unsigned int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -7528150368919952231LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 8402816586657979450LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 3158881247U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
