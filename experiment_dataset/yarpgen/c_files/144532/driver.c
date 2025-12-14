#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)84;
unsigned int var_8 = 23938285U;
unsigned int var_11 = 3223361806U;
short var_12 = (short)20127;
int zero = 0;
unsigned short var_15 = (unsigned short)55241;
unsigned char var_16 = (unsigned char)204;
void init() {
}

void checksum() {
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
