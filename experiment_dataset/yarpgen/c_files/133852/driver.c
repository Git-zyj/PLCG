#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2029511893U;
unsigned long long int var_8 = 1736031069418203072ULL;
int var_10 = -1980478988;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 2362193320511437438ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)21024;
signed char var_21 = (signed char)91;
unsigned short var_22 = (unsigned short)23195;
unsigned long long int var_23 = 7690379626146543426ULL;
int var_24 = -1879489722;
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
