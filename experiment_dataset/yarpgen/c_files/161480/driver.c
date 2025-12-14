#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_7 = (unsigned char)20;
unsigned char var_10 = (unsigned char)231;
int zero = 0;
int var_13 = 1799709050;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1263403174U;
short var_16 = (short)-16603;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
