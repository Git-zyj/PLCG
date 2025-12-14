#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1927193173U;
int var_3 = 1359861743;
short var_6 = (short)9611;
short var_8 = (short)-21384;
short var_9 = (short)29110;
int var_14 = 864296287;
int zero = 0;
unsigned int var_15 = 608040966U;
int var_16 = 1313054404;
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
