#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7289511762768598765ULL;
signed char var_3 = (signed char)72;
_Bool var_4 = (_Bool)0;
unsigned short var_10 = (unsigned short)56816;
long long int var_12 = 5800969593633839790LL;
int zero = 0;
unsigned int var_15 = 276956067U;
_Bool var_16 = (_Bool)0;
long long int var_17 = 3752407345316170212LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
