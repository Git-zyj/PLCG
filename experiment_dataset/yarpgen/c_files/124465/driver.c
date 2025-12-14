#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)210;
unsigned int var_5 = 3761987722U;
unsigned char var_7 = (unsigned char)95;
unsigned int var_11 = 336530052U;
unsigned short var_14 = (unsigned short)678;
int zero = 0;
unsigned long long int var_15 = 40201243837010240ULL;
short var_16 = (short)-12933;
unsigned long long int var_17 = 5117165711797393006ULL;
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
