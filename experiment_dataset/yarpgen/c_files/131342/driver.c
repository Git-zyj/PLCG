#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7789195132747261564ULL;
short var_4 = (short)-10544;
short var_5 = (short)-12448;
unsigned int var_7 = 982021312U;
unsigned short var_11 = (unsigned short)1539;
int zero = 0;
unsigned int var_15 = 1426473005U;
signed char var_16 = (signed char)105;
unsigned short var_17 = (unsigned short)6779;
void init() {
}

void checksum() {
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
