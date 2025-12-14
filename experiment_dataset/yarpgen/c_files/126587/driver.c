#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 135048658U;
short var_3 = (short)14859;
long long int var_5 = 6252749816193864056LL;
int var_6 = 1152044835;
short var_8 = (short)7095;
unsigned int var_12 = 2932097290U;
int var_13 = 856258604;
int zero = 0;
signed char var_15 = (signed char)-2;
unsigned char var_16 = (unsigned char)221;
int var_17 = 161871853;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
