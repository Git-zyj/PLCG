#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
short var_5 = (short)-23103;
unsigned short var_10 = (unsigned short)62725;
unsigned long long int var_12 = 13967392918804073242ULL;
unsigned char var_13 = (unsigned char)103;
int zero = 0;
int var_14 = 967810607;
unsigned int var_15 = 2550222345U;
unsigned short var_16 = (unsigned short)61225;
signed char var_17 = (signed char)18;
unsigned int var_18 = 1774139841U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
