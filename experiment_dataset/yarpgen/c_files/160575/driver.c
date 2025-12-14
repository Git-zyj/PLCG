#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3500172989U;
signed char var_4 = (signed char)3;
long long int var_8 = -6615471903546576196LL;
unsigned int var_15 = 3886230030U;
unsigned int var_16 = 2590317933U;
int zero = 0;
unsigned int var_20 = 3195256204U;
unsigned char var_21 = (unsigned char)148;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
