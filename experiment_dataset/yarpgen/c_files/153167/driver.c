#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1469064019U;
unsigned long long int var_4 = 1329605508049400935ULL;
short var_8 = (short)-17067;
unsigned char var_12 = (unsigned char)204;
int zero = 0;
long long int var_15 = -8237890478419937027LL;
int var_16 = 1339732323;
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
