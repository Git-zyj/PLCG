#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)207;
int var_3 = -1451325125;
unsigned short var_5 = (unsigned short)61847;
unsigned int var_11 = 1898087176U;
unsigned int var_13 = 386583883U;
int zero = 0;
unsigned int var_14 = 3175852513U;
int var_15 = 1530680082;
int var_16 = -498883855;
void init() {
}

void checksum() {
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
