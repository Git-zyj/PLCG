#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 672587427816126200ULL;
short var_15 = (short)-32392;
long long int var_18 = 6188610016302395136LL;
int zero = 0;
unsigned int var_20 = 3940772739U;
signed char var_21 = (signed char)27;
int var_22 = -1629049959;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
