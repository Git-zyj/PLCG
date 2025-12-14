#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1945286323U;
int var_2 = 483497933;
short var_6 = (short)-3762;
unsigned long long int var_11 = 17706949312538772813ULL;
int zero = 0;
long long int var_20 = 1226733555688532224LL;
int var_21 = 2024697268;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
