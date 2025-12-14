#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 34480222U;
signed char var_3 = (signed char)-23;
int var_9 = -1005041025;
short var_12 = (short)-8915;
long long int var_13 = -3728562505579850272LL;
int zero = 0;
short var_14 = (short)6064;
signed char var_15 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
