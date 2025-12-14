#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4005705882U;
unsigned int var_9 = 1525626455U;
unsigned short var_10 = (unsigned short)43245;
int var_12 = -705790730;
unsigned int var_14 = 2933381276U;
int var_15 = -1842606804;
int zero = 0;
signed char var_16 = (signed char)30;
unsigned int var_17 = 3937794107U;
unsigned short var_18 = (unsigned short)55022;
void init() {
}

void checksum() {
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
