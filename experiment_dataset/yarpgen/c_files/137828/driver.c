#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3508702208U;
long long int var_3 = 5420577608645017069LL;
unsigned int var_6 = 742019974U;
signed char var_10 = (signed char)39;
int zero = 0;
signed char var_11 = (signed char)65;
int var_12 = 908959278;
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
