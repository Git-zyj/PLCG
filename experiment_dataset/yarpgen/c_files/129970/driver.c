#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2553258789U;
long long int var_1 = 7345576089702631887LL;
short var_12 = (short)30387;
unsigned short var_14 = (unsigned short)52935;
int zero = 0;
long long int var_17 = -1099604676154140593LL;
unsigned char var_18 = (unsigned char)36;
short var_19 = (short)29132;
void init() {
}

void checksum() {
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
