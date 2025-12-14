#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24813;
signed char var_6 = (signed char)33;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 4038827167U;
int zero = 0;
short var_15 = (short)22390;
unsigned char var_16 = (unsigned char)124;
signed char var_17 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
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
