#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_8 = (short)-2136;
short var_9 = (short)-4713;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)43;
int zero = 0;
int var_15 = -154189323;
unsigned short var_16 = (unsigned short)58500;
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
