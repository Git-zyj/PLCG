#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_6 = 3610901703U;
short var_10 = (short)-14184;
long long int var_13 = -8685843971534370803LL;
long long int var_15 = 4882398507413109569LL;
int zero = 0;
signed char var_17 = (signed char)-60;
long long int var_18 = -4642613845618823982LL;
unsigned long long int var_19 = 10475973074606937106ULL;
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
