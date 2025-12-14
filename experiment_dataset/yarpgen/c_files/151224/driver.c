#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 3797669767304805751ULL;
unsigned long long int var_10 = 207107634478361172ULL;
unsigned int var_12 = 3692908857U;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)15119;
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
