#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17527;
int var_2 = -1656446279;
unsigned long long int var_4 = 4363860134674855883ULL;
unsigned int var_6 = 4029619277U;
short var_8 = (short)-1677;
short var_11 = (short)-31692;
unsigned int var_13 = 1836570063U;
int zero = 0;
short var_16 = (short)-31919;
short var_17 = (short)-21863;
short var_18 = (short)10581;
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
