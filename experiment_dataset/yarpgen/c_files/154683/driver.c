#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -233922067;
short var_9 = (short)18703;
short var_10 = (short)18139;
unsigned int var_11 = 2846993917U;
signed char var_13 = (signed char)36;
int zero = 0;
long long int var_14 = -5134242960718051388LL;
unsigned short var_15 = (unsigned short)56019;
unsigned int var_16 = 2846918511U;
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
