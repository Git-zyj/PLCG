#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)51147;
unsigned long long int var_8 = 16267358095891879114ULL;
unsigned int var_9 = 1410854339U;
unsigned int var_10 = 2572081167U;
unsigned int var_12 = 1640232630U;
int zero = 0;
unsigned int var_13 = 3401690503U;
_Bool var_14 = (_Bool)1;
long long int var_15 = 5850979715487796544LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
