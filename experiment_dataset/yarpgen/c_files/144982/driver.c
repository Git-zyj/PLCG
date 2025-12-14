#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 7856119543787978278LL;
unsigned char var_2 = (unsigned char)211;
signed char var_5 = (signed char)123;
_Bool var_6 = (_Bool)0;
int var_9 = -2094379874;
unsigned char var_12 = (unsigned char)8;
int zero = 0;
unsigned int var_16 = 1165964935U;
signed char var_17 = (signed char)-111;
long long int var_18 = -1492688354255061770LL;
signed char var_19 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
