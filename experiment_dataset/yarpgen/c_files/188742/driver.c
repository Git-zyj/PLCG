#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)47;
_Bool var_5 = (_Bool)1;
short var_14 = (short)-6175;
int zero = 0;
signed char var_17 = (signed char)-41;
_Bool var_18 = (_Bool)0;
int var_19 = 1310488809;
signed char var_20 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
