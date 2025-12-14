#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-1337;
signed char var_3 = (signed char)120;
short var_4 = (short)-2729;
signed char var_13 = (signed char)30;
int zero = 0;
short var_17 = (short)-6174;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-3497;
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
