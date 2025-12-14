#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_11 = (signed char)-24;
long long int var_13 = 5000610389719976034LL;
int var_14 = 1051279534;
unsigned char var_15 = (unsigned char)227;
unsigned int var_17 = 1395889348U;
unsigned long long int var_18 = 9324789610628659264ULL;
int zero = 0;
signed char var_20 = (signed char)79;
unsigned long long int var_21 = 14993972219321062955ULL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
