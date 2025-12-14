#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 8917795153875417455ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 132736494U;
int zero = 0;
unsigned int var_14 = 4174503933U;
unsigned short var_15 = (unsigned short)8077;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
