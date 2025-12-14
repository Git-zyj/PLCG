#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned int var_9 = 1954875396U;
long long int var_11 = -6088470705771366774LL;
unsigned int var_13 = 4174839812U;
long long int var_15 = -6451243435398058528LL;
int zero = 0;
long long int var_18 = -8402432561835181761LL;
unsigned short var_19 = (unsigned short)45975;
int var_20 = -539013025;
short var_21 = (short)29761;
unsigned long long int var_22 = 16745587819873545549ULL;
long long int arr_1 [23] [23] ;
int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -9056502020313179741LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1690802751 : 1808271429;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
