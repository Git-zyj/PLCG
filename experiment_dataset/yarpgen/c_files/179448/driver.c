#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
unsigned long long int var_2 = 5722666009766820755ULL;
unsigned long long int var_4 = 11101724544640315864ULL;
long long int var_5 = 191602657128780166LL;
unsigned char var_8 = (unsigned char)179;
int var_12 = -624723725;
unsigned char var_13 = (unsigned char)132;
unsigned short var_14 = (unsigned short)36682;
int zero = 0;
int var_15 = 1448707403;
unsigned int var_16 = 1965977253U;
unsigned int var_17 = 4020385390U;
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
