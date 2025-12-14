#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4082889039U;
int zero = 0;
long long int var_14 = -2692149507341315770LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2155768002U;
unsigned long long int var_17 = 14160794449355958469ULL;
unsigned char var_18 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
