#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
int var_5 = 1541242896;
_Bool var_7 = (_Bool)1;
int var_10 = 544470050;
long long int var_12 = 1682292904176702956LL;
int var_14 = -2112431351;
unsigned int var_16 = 3737334394U;
int zero = 0;
short var_17 = (short)-1353;
_Bool var_18 = (_Bool)1;
long long int var_19 = -4874693524891461087LL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
