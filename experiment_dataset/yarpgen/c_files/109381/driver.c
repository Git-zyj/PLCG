#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4414794300811788115ULL;
unsigned int var_2 = 454331691U;
unsigned long long int var_7 = 17032347615230808253ULL;
int zero = 0;
long long int var_11 = -8173984982152193876LL;
unsigned int var_12 = 794607497U;
unsigned int var_13 = 4267799826U;
unsigned int var_14 = 3541407576U;
unsigned long long int arr_1 [23] [23] ;
unsigned int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 17199888556799509649ULL : 5792212514024490055ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 988877758U : 1113633965U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
