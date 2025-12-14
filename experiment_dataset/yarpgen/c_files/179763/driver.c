#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 651153109;
signed char var_6 = (signed char)28;
long long int var_8 = 9017999770393955622LL;
unsigned int var_10 = 1505959554U;
signed char var_12 = (signed char)-119;
int zero = 0;
unsigned int var_15 = 1675923435U;
short var_16 = (short)16366;
int var_17 = 464062744;
short var_18 = (short)21795;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
