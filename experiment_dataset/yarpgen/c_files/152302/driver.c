#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1442464833U;
unsigned long long int var_4 = 6407985665713713958ULL;
unsigned int var_6 = 791589016U;
unsigned char var_10 = (unsigned char)12;
int zero = 0;
long long int var_12 = 128544803477481728LL;
unsigned short var_13 = (unsigned short)8702;
unsigned char var_14 = (unsigned char)23;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
