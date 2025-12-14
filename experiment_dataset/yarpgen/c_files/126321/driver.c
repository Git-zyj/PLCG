#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)172;
int var_11 = -1758838378;
short var_15 = (short)6613;
int var_16 = 1141569558;
int zero = 0;
unsigned short var_17 = (unsigned short)12904;
short var_18 = (short)-17312;
unsigned int var_19 = 534578103U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
