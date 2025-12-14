#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17516194285585701118ULL;
unsigned int var_8 = 1772473209U;
int var_18 = -1571767647;
int zero = 0;
unsigned long long int var_20 = 2718771433084030765ULL;
unsigned int var_21 = 60016173U;
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
