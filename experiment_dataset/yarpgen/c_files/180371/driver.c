#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_5 = -5525518354696841589LL;
unsigned long long int var_6 = 8626552682930848523ULL;
int var_8 = -2080481248;
short var_18 = (short)-20910;
int zero = 0;
unsigned long long int var_20 = 12665208783003620770ULL;
unsigned char var_21 = (unsigned char)147;
short var_22 = (short)12112;
unsigned long long int var_23 = 17788051228800174937ULL;
_Bool var_24 = (_Bool)1;
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
