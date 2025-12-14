#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16301;
unsigned short var_7 = (unsigned short)3406;
signed char var_14 = (signed char)35;
int zero = 0;
unsigned short var_16 = (unsigned short)63561;
unsigned short var_17 = (unsigned short)58820;
unsigned short var_18 = (unsigned short)42676;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
