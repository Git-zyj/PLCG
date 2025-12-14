#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13480423701776674755ULL;
unsigned long long int var_14 = 11462681510185863575ULL;
unsigned long long int var_15 = 11899454917580851695ULL;
int zero = 0;
unsigned int var_16 = 2263600558U;
short var_17 = (short)-26513;
int var_18 = -937344381;
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
