#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1917679581;
unsigned long long int var_9 = 10273738012071183146ULL;
unsigned long long int var_10 = 15776513566645899966ULL;
unsigned int var_11 = 3985181963U;
unsigned int var_12 = 958653517U;
signed char var_13 = (signed char)-7;
int zero = 0;
long long int var_14 = 4589052787132010145LL;
unsigned short var_15 = (unsigned short)48896;
unsigned short var_16 = (unsigned short)1298;
long long int var_17 = -3487229130871962006LL;
unsigned long long int arr_1 [22] ;
_Bool arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3709240190426152770ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
