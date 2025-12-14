#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8477461504606889748ULL;
unsigned long long int var_5 = 18218032296950466920ULL;
signed char var_8 = (signed char)-26;
short var_9 = (short)29319;
unsigned char var_11 = (unsigned char)146;
int zero = 0;
signed char var_14 = (signed char)-97;
int var_15 = -1646652530;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
