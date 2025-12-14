#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 691281749U;
unsigned short var_6 = (unsigned short)47843;
unsigned int var_8 = 2323637349U;
unsigned int var_14 = 1092145867U;
signed char var_15 = (signed char)15;
unsigned short var_16 = (unsigned short)2585;
unsigned char var_17 = (unsigned char)40;
int zero = 0;
unsigned char var_20 = (unsigned char)224;
long long int var_21 = -7593157923967336625LL;
signed char var_22 = (signed char)65;
long long int var_23 = 8088847443416722361LL;
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
