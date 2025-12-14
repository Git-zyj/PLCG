#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3727886962U;
int var_3 = 1828804928;
unsigned short var_5 = (unsigned short)19043;
signed char var_8 = (signed char)-13;
unsigned int var_9 = 4063582290U;
int var_14 = 1860753543;
unsigned long long int var_15 = 8348972841139769171ULL;
int zero = 0;
int var_16 = -368105476;
long long int var_17 = 1192384491870972392LL;
int var_18 = 1297888891;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
