#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)164;
int var_4 = 1797508100;
unsigned char var_5 = (unsigned char)145;
unsigned long long int var_6 = 14762232602753096423ULL;
unsigned long long int var_7 = 17160140632078064142ULL;
unsigned int var_8 = 1818048538U;
short var_9 = (short)20271;
int zero = 0;
signed char var_12 = (signed char)25;
short var_13 = (short)-22981;
long long int var_14 = -559956080573281425LL;
unsigned int var_15 = 2743466041U;
unsigned long long int var_16 = 3384696007325021576ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
