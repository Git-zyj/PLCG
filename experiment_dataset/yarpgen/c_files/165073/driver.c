#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5089380152237098504LL;
short var_10 = (short)-20537;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 4143122682380884163LL;
long long int var_13 = -4347427090748395096LL;
short var_14 = (short)19613;
long long int var_15 = -2140970985216729331LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
