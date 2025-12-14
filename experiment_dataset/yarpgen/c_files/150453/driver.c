#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-85;
long long int var_3 = -6165340585384990024LL;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)56080;
unsigned int var_7 = 885621267U;
signed char var_9 = (signed char)-30;
_Bool var_10 = (_Bool)1;
long long int var_12 = -8107047686066589567LL;
long long int var_14 = -5617578323798246234LL;
int zero = 0;
unsigned int var_15 = 3613535557U;
short var_16 = (short)-23865;
_Bool var_17 = (_Bool)1;
long long int var_18 = -8133771569093533936LL;
long long int var_19 = 8457295705511466819LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
