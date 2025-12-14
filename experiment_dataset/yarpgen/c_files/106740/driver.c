#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1079986170;
long long int var_5 = -5711817433430769812LL;
int var_7 = 533241943;
long long int var_12 = 467200574136095455LL;
short var_13 = (short)7875;
_Bool var_16 = (_Bool)0;
int var_18 = -1210826481;
int zero = 0;
signed char var_19 = (signed char)-4;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
