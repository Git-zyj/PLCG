#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3530841490U;
unsigned short var_7 = (unsigned short)7638;
unsigned long long int var_12 = 10279510954670688939ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-14318;
void init() {
}

void checksum() {
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
