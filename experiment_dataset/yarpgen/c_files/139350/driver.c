#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = -4516860443929774656LL;
long long int var_5 = 6465385039647221579LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 4253098485574678900ULL;
unsigned int var_13 = 648774320U;
unsigned int var_14 = 2312814794U;
unsigned int var_15 = 3441452229U;
int zero = 0;
unsigned char var_17 = (unsigned char)197;
short var_18 = (short)28586;
void init() {
}

void checksum() {
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
