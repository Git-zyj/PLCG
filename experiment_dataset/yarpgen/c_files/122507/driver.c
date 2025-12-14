#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 509966276;
unsigned long long int var_1 = 2518091699475137969ULL;
short var_4 = (short)6707;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)24;
unsigned int var_13 = 292862872U;
unsigned char var_14 = (unsigned char)9;
unsigned int var_15 = 833824589U;
unsigned int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2266333613U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
