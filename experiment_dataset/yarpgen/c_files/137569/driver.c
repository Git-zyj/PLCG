#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2195245074U;
unsigned int var_4 = 3721645354U;
unsigned int var_10 = 974615U;
short var_14 = (short)-15161;
int zero = 0;
unsigned int var_18 = 4164984533U;
unsigned char var_19 = (unsigned char)204;
void init() {
}

void checksum() {
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
