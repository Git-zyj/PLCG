#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
short var_10 = (short)-6348;
_Bool var_16 = (_Bool)1;
signed char var_18 = (signed char)57;
int zero = 0;
long long int var_20 = -933142665401668002LL;
short var_21 = (short)3883;
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
