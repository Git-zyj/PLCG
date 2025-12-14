#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1839107286;
int var_6 = 1549720213;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 1414237750U;
int zero = 0;
int var_15 = -131415081;
short var_16 = (short)639;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
