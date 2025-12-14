#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3817843086U;
signed char var_4 = (signed char)32;
long long int var_10 = -6218266614728815432LL;
unsigned char var_13 = (unsigned char)187;
int zero = 0;
unsigned char var_20 = (unsigned char)148;
unsigned char var_21 = (unsigned char)209;
signed char var_22 = (signed char)1;
unsigned char var_23 = (unsigned char)109;
long long int var_24 = 8811595826564236201LL;
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
