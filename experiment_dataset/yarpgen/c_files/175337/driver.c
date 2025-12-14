#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1880995078050374115LL;
unsigned long long int var_2 = 6827449929598176045ULL;
long long int var_6 = 3037985410347572495LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)29;
int var_12 = 1571106630;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
