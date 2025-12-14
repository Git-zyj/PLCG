#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5138835343499446128LL;
_Bool var_3 = (_Bool)0;
long long int var_15 = 830410517490354084LL;
short var_17 = (short)13174;
int zero = 0;
signed char var_18 = (signed char)69;
unsigned short var_19 = (unsigned short)25532;
long long int var_20 = 3786702329977198319LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
