#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-7723;
int var_12 = -859988411;
long long int var_14 = -5078705458629095350LL;
int zero = 0;
unsigned long long int var_15 = 14890251587436770402ULL;
unsigned char var_16 = (unsigned char)36;
short var_17 = (short)22482;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
