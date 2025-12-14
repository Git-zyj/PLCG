#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1507668891;
int var_8 = 1649603875;
unsigned long long int var_9 = 2216479479188653695ULL;
int var_11 = 865755186;
int zero = 0;
int var_16 = -1091032563;
unsigned long long int var_17 = 12482556124716037436ULL;
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
