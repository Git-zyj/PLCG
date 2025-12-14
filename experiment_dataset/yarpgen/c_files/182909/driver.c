#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -380791089;
long long int var_9 = -7078570806406338886LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
long long int var_14 = -2322666025455324390LL;
int zero = 0;
short var_15 = (short)24234;
short var_16 = (short)26468;
long long int var_17 = -7910584765494297161LL;
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
