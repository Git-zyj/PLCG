#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4174587591U;
unsigned int var_7 = 1131632536U;
unsigned int var_8 = 2687579513U;
unsigned int var_12 = 2697570583U;
int zero = 0;
unsigned int var_14 = 3705008083U;
unsigned int var_15 = 4208198073U;
unsigned int var_16 = 2014579620U;
unsigned int var_17 = 3095665408U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
