#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1798083902U;
unsigned char var_3 = (unsigned char)93;
signed char var_4 = (signed char)41;
long long int var_6 = 9109065657814157798LL;
unsigned long long int var_10 = 7969536751824247216ULL;
int zero = 0;
signed char var_15 = (signed char)-108;
int var_16 = 1454117941;
int var_17 = 1821181740;
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
