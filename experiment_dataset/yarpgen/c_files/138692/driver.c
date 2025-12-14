#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)-7412;
_Bool var_4 = (_Bool)0;
short var_5 = (short)25757;
short var_6 = (short)-13080;
_Bool var_7 = (_Bool)1;
int var_10 = -334720672;
short var_12 = (short)-23288;
int var_13 = -1316859677;
short var_15 = (short)-6809;
short var_17 = (short)26289;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = -1689764869;
int var_20 = -1731082978;
short var_21 = (short)-9029;
int var_22 = 207227578;
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
