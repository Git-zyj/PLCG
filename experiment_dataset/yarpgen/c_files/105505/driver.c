#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)171;
signed char var_2 = (signed char)53;
unsigned char var_3 = (unsigned char)95;
int var_8 = -737483256;
int var_13 = 542731212;
int zero = 0;
short var_14 = (short)-17965;
long long int var_15 = -8120789758772268269LL;
unsigned int var_16 = 1617510266U;
unsigned int var_17 = 4256869309U;
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
