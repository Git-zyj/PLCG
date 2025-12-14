#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)29902;
long long int var_8 = 8739248423385055186LL;
signed char var_10 = (signed char)16;
_Bool var_12 = (_Bool)0;
int var_13 = -1727140957;
int zero = 0;
int var_16 = -1354994418;
long long int var_17 = 2645813208875528113LL;
void init() {
}

void checksum() {
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
