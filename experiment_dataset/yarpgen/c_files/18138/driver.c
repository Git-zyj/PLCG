#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)127;
short var_4 = (short)-18115;
long long int var_5 = 1744463297880200879LL;
unsigned int var_6 = 98363060U;
int zero = 0;
short var_10 = (short)29226;
signed char var_11 = (signed char)-41;
signed char var_12 = (signed char)58;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
