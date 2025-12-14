#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-44;
unsigned int var_7 = 96532515U;
signed char var_13 = (signed char)-94;
unsigned int var_14 = 4241900288U;
unsigned int var_17 = 2976480160U;
int zero = 0;
long long int var_20 = 8259981599972721677LL;
short var_21 = (short)1185;
int var_22 = 588573685;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
