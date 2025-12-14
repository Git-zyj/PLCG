#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 1098578135U;
unsigned long long int var_4 = 17781319720288753464ULL;
short var_5 = (short)-13129;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)25380;
unsigned short var_10 = (unsigned short)29332;
int zero = 0;
signed char var_12 = (signed char)6;
long long int var_13 = -7491095512019366386LL;
unsigned short var_14 = (unsigned short)57955;
void init() {
}

void checksum() {
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
