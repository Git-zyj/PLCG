#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8247018144555622984LL;
unsigned int var_1 = 2913303982U;
int var_2 = -1416751166;
unsigned long long int var_4 = 8282927893480793518ULL;
int var_5 = 1834856901;
unsigned int var_10 = 2128257988U;
int zero = 0;
int var_11 = -1773523144;
short var_12 = (short)-17482;
unsigned int var_13 = 1171044503U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
