#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 9086348883760960743LL;
short var_3 = (short)3892;
int var_5 = -82845476;
unsigned int var_6 = 1101031941U;
int var_8 = 2083909099;
short var_9 = (short)11391;
int zero = 0;
short var_10 = (short)-31041;
unsigned int var_11 = 634707922U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
