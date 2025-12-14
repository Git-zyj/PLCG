#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35951;
unsigned long long int var_3 = 534255563138844683ULL;
unsigned short var_8 = (unsigned short)48016;
short var_13 = (short)30254;
int zero = 0;
unsigned int var_20 = 908507972U;
unsigned short var_21 = (unsigned short)48739;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
