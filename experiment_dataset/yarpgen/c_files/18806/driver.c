#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)33897;
unsigned char var_8 = (unsigned char)156;
signed char var_11 = (signed char)101;
short var_12 = (short)15554;
short var_15 = (short)-22201;
int zero = 0;
long long int var_17 = -4504919727116076237LL;
unsigned int var_18 = 985276369U;
signed char var_19 = (signed char)75;
unsigned int var_20 = 1916939390U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
