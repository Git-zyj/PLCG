#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2481233982U;
long long int var_6 = -6607918780510240635LL;
unsigned char var_7 = (unsigned char)230;
_Bool var_8 = (_Bool)0;
unsigned char var_12 = (unsigned char)43;
int zero = 0;
unsigned short var_14 = (unsigned short)32516;
short var_15 = (short)15926;
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
