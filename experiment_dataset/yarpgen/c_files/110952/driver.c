#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2810395493548800590ULL;
long long int var_1 = 2677997749490924258LL;
long long int var_8 = 2929394396362547996LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 3688438431U;
unsigned int var_19 = 339524987U;
int var_20 = 2005375810;
short var_21 = (short)1401;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
