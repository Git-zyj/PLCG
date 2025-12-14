#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1857297967;
unsigned long long int var_1 = 4199030516880097885ULL;
signed char var_3 = (signed char)111;
int var_6 = 1767381577;
signed char var_7 = (signed char)92;
signed char var_9 = (signed char)-36;
short var_12 = (short)30578;
unsigned long long int var_15 = 10286410969883827500ULL;
int var_16 = 644845387;
unsigned int var_18 = 644260752U;
int var_19 = 1331311705;
int zero = 0;
short var_20 = (short)6535;
long long int var_21 = -3038231041268550249LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
