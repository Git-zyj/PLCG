#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)78;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-22;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)17540;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-8509;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
