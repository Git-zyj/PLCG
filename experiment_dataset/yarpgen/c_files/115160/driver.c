#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4094;
unsigned short var_1 = (unsigned short)26924;
unsigned short var_3 = (unsigned short)39811;
unsigned short var_5 = (unsigned short)7334;
unsigned short var_7 = (unsigned short)6048;
unsigned short var_11 = (unsigned short)61450;
unsigned short var_12 = (unsigned short)36098;
int zero = 0;
unsigned short var_16 = (unsigned short)23259;
unsigned short var_17 = (unsigned short)55166;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
