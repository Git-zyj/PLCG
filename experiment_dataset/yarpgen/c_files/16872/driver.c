#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 768345888537290709LL;
unsigned int var_3 = 3397528729U;
unsigned int var_4 = 315509274U;
signed char var_13 = (signed char)33;
short var_16 = (short)553;
short var_18 = (short)28635;
int zero = 0;
int var_20 = 1191620080;
short var_21 = (short)-8912;
short var_22 = (short)-5098;
unsigned long long int var_23 = 4715912239853040581ULL;
short var_24 = (short)-19802;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
