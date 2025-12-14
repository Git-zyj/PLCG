#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1601552405;
short var_7 = (short)-15483;
int var_11 = 538013;
int var_14 = 1484585099;
signed char var_15 = (signed char)94;
int zero = 0;
short var_16 = (short)-22679;
short var_17 = (short)-19648;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-21793;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
