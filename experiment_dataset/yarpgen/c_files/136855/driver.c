#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5623;
int var_1 = -709047258;
unsigned short var_2 = (unsigned short)59855;
unsigned long long int var_4 = 18415467471400869189ULL;
unsigned long long int var_8 = 4528813261849259641ULL;
long long int var_10 = -3057964774070064824LL;
short var_14 = (short)-30476;
int zero = 0;
signed char var_16 = (signed char)23;
short var_17 = (short)32213;
void init() {
}

void checksum() {
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
