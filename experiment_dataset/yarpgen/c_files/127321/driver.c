#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)16;
unsigned int var_3 = 779152791U;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)113;
int var_8 = 1169596533;
int var_10 = 1852159044;
int var_14 = 64098581;
long long int var_15 = 8093998120199057228LL;
int zero = 0;
short var_16 = (short)-21884;
short var_17 = (short)-2675;
unsigned int var_18 = 1276076755U;
unsigned int var_19 = 1203296100U;
int var_20 = 1818060494;
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
