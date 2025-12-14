#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25307;
short var_9 = (short)-12113;
_Bool var_10 = (_Bool)1;
signed char var_14 = (signed char)85;
int var_15 = -395270752;
int zero = 0;
short var_16 = (short)24375;
int var_17 = 620428364;
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
