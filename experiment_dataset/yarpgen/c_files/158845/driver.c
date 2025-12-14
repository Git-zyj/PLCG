#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4859866843833210976LL;
unsigned int var_1 = 767778532U;
signed char var_6 = (signed char)57;
_Bool var_9 = (_Bool)1;
int var_11 = -2017404757;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)1;
int zero = 0;
short var_14 = (short)7919;
long long int var_15 = -516277387582923031LL;
void init() {
}

void checksum() {
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
