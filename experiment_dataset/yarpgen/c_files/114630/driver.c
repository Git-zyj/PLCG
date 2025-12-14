#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1352260261U;
short var_7 = (short)-32616;
unsigned long long int var_9 = 1377275102017976692ULL;
int var_10 = -368839407;
short var_11 = (short)-9742;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)8;
unsigned int var_15 = 245391914U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
