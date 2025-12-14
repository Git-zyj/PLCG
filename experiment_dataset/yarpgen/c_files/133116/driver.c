#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5270139890140636957LL;
short var_4 = (short)8024;
int var_5 = -1638462211;
_Bool var_8 = (_Bool)1;
int var_10 = -688312793;
long long int var_12 = 4002996842167996408LL;
short var_14 = (short)23453;
short var_15 = (short)8990;
int zero = 0;
signed char var_17 = (signed char)66;
long long int var_18 = 5755368724869714214LL;
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
