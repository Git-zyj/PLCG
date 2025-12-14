#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47469;
_Bool var_3 = (_Bool)1;
int var_5 = -497796686;
unsigned short var_12 = (unsigned short)2194;
int zero = 0;
unsigned int var_14 = 745334460U;
unsigned long long int var_15 = 4698187527149016665ULL;
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
