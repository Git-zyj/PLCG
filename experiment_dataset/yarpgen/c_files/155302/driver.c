#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -697622850862357587LL;
int var_1 = 1552692914;
signed char var_3 = (signed char)55;
unsigned long long int var_8 = 6520581483258815572ULL;
long long int var_11 = 8438821328477851025LL;
int zero = 0;
long long int var_12 = -6638663367608632289LL;
long long int var_13 = -8922539315665435605LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
