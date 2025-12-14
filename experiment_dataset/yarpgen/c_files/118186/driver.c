#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3108921319923812389LL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3917116304U;
unsigned char var_11 = (unsigned char)170;
short var_14 = (short)-380;
short var_16 = (short)-16379;
long long int var_17 = -7749336168710384628LL;
int zero = 0;
unsigned int var_20 = 2761056030U;
unsigned long long int var_21 = 12153798640369989762ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
