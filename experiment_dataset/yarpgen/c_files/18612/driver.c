#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-4;
unsigned long long int var_8 = 15255466930706528654ULL;
long long int var_10 = -3530385068852168096LL;
unsigned short var_12 = (unsigned short)35656;
int zero = 0;
unsigned int var_16 = 3884593512U;
unsigned long long int var_17 = 10463961611469410755ULL;
long long int var_18 = 1957396393891661743LL;
int var_19 = -1322659885;
short var_20 = (short)7661;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
