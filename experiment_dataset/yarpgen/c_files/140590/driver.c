#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2718906249085833907ULL;
unsigned int var_7 = 4225834004U;
long long int var_11 = -739399220264386599LL;
int zero = 0;
short var_19 = (short)29247;
unsigned long long int var_20 = 12588573558090543361ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
