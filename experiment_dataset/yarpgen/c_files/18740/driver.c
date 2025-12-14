#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)34;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3948130746U;
_Bool var_7 = (_Bool)0;
unsigned char var_11 = (unsigned char)88;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = -2051932310870936982LL;
unsigned char var_15 = (unsigned char)100;
long long int var_16 = -5941917862198126427LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
