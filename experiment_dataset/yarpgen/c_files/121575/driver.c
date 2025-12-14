#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_5 = -4314258054256240760LL;
long long int var_6 = -853741233502628315LL;
long long int var_7 = -4965853974037987084LL;
long long int var_8 = 3443933076714995272LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 547770659U;
signed char var_11 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
