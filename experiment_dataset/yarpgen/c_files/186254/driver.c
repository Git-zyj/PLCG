#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)32678;
unsigned int var_8 = 157388433U;
long long int var_10 = -5673726140392634744LL;
int zero = 0;
unsigned int var_11 = 209615895U;
unsigned int var_12 = 781268986U;
unsigned int var_13 = 798991083U;
unsigned long long int var_14 = 13017686067956718713ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
