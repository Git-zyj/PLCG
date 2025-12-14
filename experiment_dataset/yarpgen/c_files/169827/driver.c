#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3005039533U;
signed char var_4 = (signed char)55;
unsigned long long int var_5 = 15982692780320367557ULL;
signed char var_7 = (signed char)80;
short var_8 = (short)357;
unsigned short var_12 = (unsigned short)16805;
int zero = 0;
unsigned long long int var_13 = 11859410103061947913ULL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)2121;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
