#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1805402200;
unsigned char var_6 = (unsigned char)160;
unsigned char var_11 = (unsigned char)240;
int zero = 0;
signed char var_13 = (signed char)-17;
signed char var_14 = (signed char)-9;
signed char var_15 = (signed char)-99;
long long int var_16 = -5841237272648934080LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
