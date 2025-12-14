#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
long long int var_7 = 4181713001580640011LL;
long long int var_8 = -5474075782687790436LL;
signed char var_10 = (signed char)125;
short var_11 = (short)18366;
short var_12 = (short)-13375;
int var_13 = -1473659083;
int zero = 0;
long long int var_17 = 7664345845030753163LL;
short var_18 = (short)11544;
void init() {
}

void checksum() {
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
