#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7475308861414275314LL;
unsigned short var_6 = (unsigned short)20667;
int zero = 0;
unsigned long long int var_15 = 14216753996978703158ULL;
unsigned long long int var_16 = 690500293994828197ULL;
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
