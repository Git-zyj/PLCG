#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1442826856U;
int var_1 = -1891575363;
signed char var_2 = (signed char)-32;
int var_5 = 1965320083;
unsigned int var_7 = 41455917U;
int var_9 = 1924184390;
_Bool var_10 = (_Bool)0;
unsigned int var_14 = 4146644545U;
int zero = 0;
int var_15 = 2144604739;
unsigned int var_16 = 1643915573U;
_Bool var_17 = (_Bool)1;
int var_18 = 1705221588;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
