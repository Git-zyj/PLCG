#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_7 = 1987552056U;
long long int var_8 = -3901562108481472092LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 9110345093997625685ULL;
signed char var_13 = (signed char)17;
int zero = 0;
unsigned char var_17 = (unsigned char)28;
long long int var_18 = -1983259534697585567LL;
unsigned char var_19 = (unsigned char)59;
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
