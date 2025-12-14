#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -2075069015;
int var_12 = -1583836886;
short var_14 = (short)14459;
unsigned char var_16 = (unsigned char)172;
int zero = 0;
int var_19 = -1777924299;
short var_20 = (short)8252;
void init() {
}

void checksum() {
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
