#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22470;
signed char var_10 = (signed char)20;
unsigned int var_12 = 1556915627U;
int zero = 0;
short var_15 = (short)-24223;
_Bool var_16 = (_Bool)0;
long long int var_17 = -6990098979700859134LL;
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
