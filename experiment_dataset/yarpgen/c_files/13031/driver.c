#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1468680030U;
unsigned char var_2 = (unsigned char)91;
unsigned int var_5 = 1093552853U;
unsigned long long int var_7 = 3058493556452762010ULL;
signed char var_9 = (signed char)-28;
unsigned int var_10 = 1828991877U;
unsigned long long int var_12 = 7240302260141624459ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)24507;
unsigned short var_18 = (unsigned short)26570;
unsigned long long int var_19 = 12249070695133119172ULL;
unsigned long long int var_20 = 16525474397548335975ULL;
signed char var_21 = (signed char)81;
long long int var_22 = 7078261606544247789LL;
unsigned long long int var_23 = 9786228234250858882ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
