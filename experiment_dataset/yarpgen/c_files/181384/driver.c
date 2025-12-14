#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3752704633786564377ULL;
unsigned long long int var_3 = 3592703978951917684ULL;
long long int var_6 = 2615031855724202149LL;
unsigned char var_13 = (unsigned char)134;
int zero = 0;
signed char var_14 = (signed char)46;
signed char var_15 = (signed char)3;
short var_16 = (short)25263;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
