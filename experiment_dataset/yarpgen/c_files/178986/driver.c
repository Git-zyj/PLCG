#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 4228481493U;
short var_5 = (short)7966;
short var_7 = (short)19059;
unsigned int var_8 = 4103051615U;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-15832;
unsigned int var_12 = 2725188936U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
