#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)77;
short var_3 = (short)-23504;
unsigned int var_4 = 1308595138U;
signed char var_10 = (signed char)62;
unsigned int var_11 = 3505335261U;
int zero = 0;
unsigned char var_13 = (unsigned char)197;
short var_14 = (short)6446;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
