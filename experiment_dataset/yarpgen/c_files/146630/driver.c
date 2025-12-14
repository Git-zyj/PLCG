#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1492643532734858391LL;
unsigned short var_4 = (unsigned short)27612;
unsigned long long int var_7 = 1682334212891301389ULL;
unsigned int var_8 = 4105633453U;
int var_12 = -1961671260;
long long int var_14 = -2772288621274978948LL;
long long int var_15 = -5096401033078847040LL;
int zero = 0;
signed char var_18 = (signed char)-100;
unsigned int var_19 = 3590619917U;
unsigned short var_20 = (unsigned short)29345;
void init() {
}

void checksum() {
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
