#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 15090055699643546696ULL;
unsigned char var_11 = (unsigned char)79;
unsigned long long int var_15 = 8995712937972452975ULL;
unsigned int var_19 = 2367893089U;
int zero = 0;
short var_20 = (short)14063;
unsigned int var_21 = 3073619097U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
