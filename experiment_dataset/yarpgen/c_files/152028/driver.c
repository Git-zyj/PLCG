#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64734;
unsigned long long int var_10 = 17559298184787047555ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_13 = -1113717010;
short var_14 = (short)-2216;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-18008;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
