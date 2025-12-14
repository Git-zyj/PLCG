#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15523;
signed char var_6 = (signed char)113;
unsigned char var_10 = (unsigned char)161;
unsigned short var_13 = (unsigned short)25585;
int zero = 0;
short var_14 = (short)-22905;
signed char var_15 = (signed char)(-127 - 1);
short var_16 = (short)295;
short var_17 = (short)29934;
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
