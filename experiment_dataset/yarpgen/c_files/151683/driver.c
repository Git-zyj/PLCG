#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1736741513401344997LL;
unsigned int var_8 = 3767898577U;
unsigned long long int var_11 = 12775862166148901769ULL;
long long int var_12 = 2234445058306298721LL;
int zero = 0;
unsigned char var_13 = (unsigned char)29;
unsigned short var_14 = (unsigned short)43044;
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
