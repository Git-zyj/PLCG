#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20925;
signed char var_4 = (signed char)116;
int var_5 = -42309404;
int var_9 = -1826567245;
short var_10 = (short)-16076;
short var_12 = (short)-18124;
unsigned char var_15 = (unsigned char)6;
int zero = 0;
long long int var_16 = 2325529449220763934LL;
long long int var_17 = -4204190985846280249LL;
void init() {
}

void checksum() {
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
