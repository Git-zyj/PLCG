#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-3241;
unsigned short var_7 = (unsigned short)62512;
unsigned short var_8 = (unsigned short)60864;
long long int var_10 = 6013688333462678681LL;
unsigned int var_12 = 3238595533U;
int zero = 0;
signed char var_14 = (signed char)-5;
unsigned int var_15 = 2075556306U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
