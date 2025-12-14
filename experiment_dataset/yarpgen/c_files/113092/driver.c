#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)16851;
unsigned long long int var_13 = 11935218689623103209ULL;
unsigned short var_14 = (unsigned short)42390;
int zero = 0;
unsigned short var_15 = (unsigned short)48234;
unsigned char var_16 = (unsigned char)69;
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
