#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-70;
unsigned int var_9 = 3939678900U;
unsigned int var_10 = 1695635931U;
unsigned short var_13 = (unsigned short)4911;
int var_14 = 95857968;
int zero = 0;
long long int var_19 = 8017382989620802490LL;
unsigned long long int var_20 = 7198566308676250857ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
