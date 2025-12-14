#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1719240368034689463ULL;
unsigned int var_4 = 175716426U;
unsigned int var_7 = 1907196918U;
int var_11 = -266625248;
signed char var_12 = (signed char)-112;
signed char var_13 = (signed char)-78;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2202729767U;
unsigned int var_17 = 1939977456U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
