#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_9 = 2942224294512636113LL;
signed char var_13 = (signed char)33;
_Bool var_15 = (_Bool)0;
unsigned short var_17 = (unsigned short)16231;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 18063406765164863272ULL;
long long int var_21 = 7232350858915447963LL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)5417;
long long int var_24 = -6282760884712049036LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
