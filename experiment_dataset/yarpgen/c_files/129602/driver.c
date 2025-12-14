#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8508;
int var_4 = 1299131057;
short var_12 = (short)-1944;
signed char var_14 = (signed char)46;
short var_16 = (short)-30729;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 2742977051915359722LL;
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
