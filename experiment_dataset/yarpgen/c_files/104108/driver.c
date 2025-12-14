#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30651;
long long int var_9 = -533183690148940137LL;
long long int var_10 = -2827480504958754010LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_16 = (short)18976;
short var_17 = (short)-13737;
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
