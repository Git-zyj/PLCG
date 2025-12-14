#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1807050521;
unsigned int var_6 = 326472128U;
long long int var_8 = -4966383857688880230LL;
int var_9 = 1477935953;
short var_10 = (short)5348;
unsigned int var_13 = 2971864281U;
unsigned int var_14 = 2828953643U;
short var_18 = (short)26838;
int zero = 0;
signed char var_19 = (signed char)120;
unsigned int var_20 = 3039220153U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
