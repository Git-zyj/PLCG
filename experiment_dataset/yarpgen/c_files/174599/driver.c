#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 8835965787929876296ULL;
long long int var_6 = -686244182392454306LL;
short var_11 = (short)6099;
int zero = 0;
unsigned char var_15 = (unsigned char)244;
unsigned short var_16 = (unsigned short)59514;
unsigned short var_17 = (unsigned short)44472;
signed char var_18 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
