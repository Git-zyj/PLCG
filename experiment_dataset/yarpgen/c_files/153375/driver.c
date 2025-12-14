#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_8 = (unsigned short)16929;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-77;
int zero = 0;
long long int var_14 = -4258653974442307095LL;
long long int var_15 = -3085631239007293520LL;
short var_16 = (short)-9491;
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
