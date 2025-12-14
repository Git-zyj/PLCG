#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 10005635746634723615ULL;
unsigned char var_5 = (unsigned char)62;
unsigned int var_6 = 3613786451U;
unsigned long long int var_7 = 14183091939821832646ULL;
int zero = 0;
short var_10 = (short)30331;
long long int var_11 = -1771041575522126095LL;
unsigned int var_12 = 1783167955U;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 17512705566389478254ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
