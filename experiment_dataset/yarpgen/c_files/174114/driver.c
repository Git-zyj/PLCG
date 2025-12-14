#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3518347080U;
int var_6 = 2097412361;
int zero = 0;
short var_14 = (short)-17925;
unsigned char var_15 = (unsigned char)178;
unsigned int var_16 = 1115068566U;
unsigned short var_17 = (unsigned short)5249;
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
