#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3188301007368450368ULL;
unsigned char var_8 = (unsigned char)208;
unsigned long long int var_11 = 14581080029036830372ULL;
unsigned long long int var_12 = 15475432186014552509ULL;
unsigned long long int var_13 = 5752824929909975103ULL;
unsigned char var_15 = (unsigned char)190;
unsigned long long int var_17 = 5224786561668300090ULL;
int zero = 0;
long long int var_18 = 5468426210825063963LL;
unsigned char var_19 = (unsigned char)173;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
