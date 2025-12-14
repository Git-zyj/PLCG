#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 2972945051U;
_Bool var_4 = (_Bool)1;
signed char var_10 = (signed char)102;
long long int var_11 = -8678232264682926497LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1048719019U;
short var_14 = (short)-32046;
void init() {
}

void checksum() {
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
