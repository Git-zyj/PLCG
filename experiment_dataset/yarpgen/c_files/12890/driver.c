#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)30598;
short var_5 = (short)-11848;
short var_7 = (short)-28938;
_Bool var_9 = (_Bool)1;
short var_11 = (short)8757;
short var_12 = (short)-9022;
int zero = 0;
short var_17 = (short)29185;
short var_18 = (short)10979;
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
