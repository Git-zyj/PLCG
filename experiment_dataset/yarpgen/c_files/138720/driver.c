#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5049392990742113637LL;
signed char var_11 = (signed char)31;
unsigned char var_13 = (unsigned char)113;
signed char var_14 = (signed char)-36;
int zero = 0;
signed char var_20 = (signed char)-91;
signed char var_21 = (signed char)67;
short var_22 = (short)-8213;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
