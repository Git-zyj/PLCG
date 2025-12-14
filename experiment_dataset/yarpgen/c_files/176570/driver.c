#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1754926858725910047LL;
long long int var_6 = 25360606797783173LL;
unsigned int var_15 = 3011604494U;
short var_16 = (short)-13812;
int zero = 0;
long long int var_17 = 483351710249716449LL;
unsigned long long int var_18 = 14861158975313527944ULL;
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
