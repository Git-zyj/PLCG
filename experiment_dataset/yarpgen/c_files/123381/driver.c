#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3251;
short var_1 = (short)-21667;
unsigned long long int var_2 = 5319039652241959414ULL;
long long int var_4 = -638484052013161313LL;
short var_5 = (short)-18652;
short var_8 = (short)-11753;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 3088329948301751836ULL;
short var_11 = (short)30013;
signed char var_12 = (signed char)66;
int zero = 0;
unsigned short var_15 = (unsigned short)37443;
unsigned int var_16 = 2533219786U;
_Bool var_17 = (_Bool)1;
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
