#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7476858910349047097ULL;
unsigned int var_1 = 1878096687U;
unsigned int var_2 = 190215449U;
unsigned long long int var_3 = 17109615614230239469ULL;
unsigned int var_5 = 1599128789U;
int zero = 0;
long long int var_11 = 6162592099757841228LL;
long long int var_12 = 4746765747978331444LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
