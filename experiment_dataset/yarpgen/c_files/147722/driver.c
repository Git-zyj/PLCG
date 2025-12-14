#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36649;
signed char var_1 = (signed char)-36;
signed char var_2 = (signed char)-67;
unsigned short var_7 = (unsigned short)17805;
short var_8 = (short)1827;
unsigned short var_9 = (unsigned short)28502;
unsigned int var_10 = 1659156710U;
int zero = 0;
int var_13 = 611478423;
unsigned long long int var_14 = 13337009814852786453ULL;
long long int var_15 = -149818273104235586LL;
unsigned int var_16 = 3613800021U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
