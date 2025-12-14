#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_12 = (short)29239;
short var_15 = (short)3614;
unsigned char var_18 = (unsigned char)184;
int zero = 0;
unsigned char var_20 = (unsigned char)42;
unsigned long long int var_21 = 8863806023398471714ULL;
signed char var_22 = (signed char)-80;
unsigned char var_23 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
