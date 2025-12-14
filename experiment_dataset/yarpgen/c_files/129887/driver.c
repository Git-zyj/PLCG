#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 943977035;
short var_12 = (short)1579;
unsigned long long int var_14 = 10323711746482007115ULL;
int zero = 0;
short var_15 = (short)-18636;
unsigned long long int var_16 = 12556162420693382274ULL;
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
