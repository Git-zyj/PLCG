#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_11 = 14909855594415092602ULL;
signed char var_12 = (signed char)-104;
int zero = 0;
signed char var_15 = (signed char)56;
unsigned char var_16 = (unsigned char)212;
unsigned long long int var_17 = 10962276085176814949ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
