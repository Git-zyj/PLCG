#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = -1708914624232969580LL;
long long int var_5 = 6394534716759226023LL;
unsigned short var_10 = (unsigned short)19711;
_Bool var_11 = (_Bool)1;
long long int var_13 = -6750612375835886097LL;
signed char var_14 = (signed char)-30;
signed char var_15 = (signed char)32;
short var_16 = (short)-9759;
int zero = 0;
long long int var_17 = 4401608169871615781LL;
short var_18 = (short)-10991;
long long int var_19 = -2820010093040705813LL;
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
