#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)4407;
unsigned char var_5 = (unsigned char)210;
unsigned short var_10 = (unsigned short)29877;
unsigned int var_13 = 1624767599U;
int zero = 0;
unsigned char var_15 = (unsigned char)118;
unsigned int var_16 = 1469571000U;
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
