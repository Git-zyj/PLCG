#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28857;
unsigned int var_2 = 3951025622U;
signed char var_7 = (signed char)(-127 - 1);
unsigned short var_12 = (unsigned short)45349;
unsigned char var_13 = (unsigned char)171;
int zero = 0;
unsigned char var_16 = (unsigned char)154;
signed char var_17 = (signed char)-11;
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
