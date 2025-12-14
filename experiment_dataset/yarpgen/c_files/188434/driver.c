#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3080538674983593781ULL;
long long int var_3 = -1347831226125439880LL;
long long int var_7 = -6900180826591946854LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 14732624939535520174ULL;
int zero = 0;
long long int var_18 = 1918862784756986529LL;
short var_19 = (short)-13393;
int var_20 = -1741255119;
unsigned char var_21 = (unsigned char)248;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
