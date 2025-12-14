#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2097088056484716754LL;
unsigned int var_4 = 655898872U;
unsigned int var_7 = 4096202652U;
int var_9 = -1857229889;
int var_11 = -1656954712;
unsigned char var_12 = (unsigned char)222;
unsigned int var_13 = 1894670350U;
int zero = 0;
int var_14 = 883018737;
unsigned int var_15 = 1642848862U;
unsigned int var_16 = 3116362860U;
void init() {
}

void checksum() {
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
