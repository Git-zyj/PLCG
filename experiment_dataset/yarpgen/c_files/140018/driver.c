#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)-56;
unsigned int var_13 = 767277295U;
unsigned char var_14 = (unsigned char)234;
unsigned char var_16 = (unsigned char)231;
int zero = 0;
unsigned long long int var_17 = 7263257121318175839ULL;
long long int var_18 = -57773703778332449LL;
unsigned char var_19 = (unsigned char)33;
short var_20 = (short)-20387;
long long int var_21 = -5414978502089065382LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
