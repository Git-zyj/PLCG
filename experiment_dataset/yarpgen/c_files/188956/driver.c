#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30155;
short var_3 = (short)-2910;
_Bool var_4 = (_Bool)0;
signed char var_8 = (signed char)1;
_Bool var_13 = (_Bool)0;
int var_15 = 805523349;
int zero = 0;
signed char var_16 = (signed char)126;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
