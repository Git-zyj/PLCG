#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6238;
signed char var_2 = (signed char)75;
signed char var_8 = (signed char)45;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-15456;
int zero = 0;
long long int var_15 = 8694781093528891540LL;
signed char var_16 = (signed char)94;
short var_17 = (short)4357;
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
