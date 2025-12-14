#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14034;
short var_2 = (short)30099;
unsigned long long int var_3 = 11945170673207482237ULL;
unsigned long long int var_6 = 12763610010542378443ULL;
unsigned int var_7 = 272242588U;
unsigned int var_9 = 2789495967U;
int zero = 0;
short var_12 = (short)18841;
unsigned long long int var_13 = 1314424263212740802ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 1534650910606822293ULL;
unsigned int arr_0 [10] [10] ;
short arr_1 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 1794407679U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-20505;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
