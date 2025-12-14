#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)99;
unsigned char var_6 = (unsigned char)135;
unsigned long long int var_8 = 15498835162527251944ULL;
unsigned long long int var_10 = 6327405552812870497ULL;
int var_12 = 1349715871;
unsigned char var_14 = (unsigned char)33;
short var_18 = (short)29283;
int zero = 0;
unsigned int var_19 = 282017003U;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)86;
unsigned int var_22 = 329228635U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
