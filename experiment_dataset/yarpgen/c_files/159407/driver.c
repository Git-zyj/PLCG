#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6083767813425684680ULL;
long long int var_5 = -3873598959984137184LL;
signed char var_6 = (signed char)65;
unsigned short var_7 = (unsigned short)2042;
unsigned int var_9 = 3045384501U;
int zero = 0;
unsigned short var_13 = (unsigned short)29794;
unsigned short var_14 = (unsigned short)59702;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
