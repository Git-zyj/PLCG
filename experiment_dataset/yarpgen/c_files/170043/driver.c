#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1549845323;
int var_2 = -999386982;
long long int var_3 = -2751347739403189098LL;
long long int var_4 = 2852404114190295363LL;
int var_5 = 959439258;
_Bool var_9 = (_Bool)0;
int var_10 = -12811667;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_12 = -1848431675;
signed char var_13 = (signed char)87;
long long int var_14 = 2301695115906890336LL;
int var_15 = 1118701724;
int var_16 = -1633905832;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
