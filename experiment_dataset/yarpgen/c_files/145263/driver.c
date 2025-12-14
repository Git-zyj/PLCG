#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)63575;
long long int var_2 = 1953709559590481715LL;
long long int var_3 = 4586662277638152933LL;
int var_4 = 2137975505;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 802078063826304794ULL;
unsigned int var_10 = 1299280162U;
int zero = 0;
unsigned long long int var_15 = 295947556608270668ULL;
short var_16 = (short)17069;
unsigned char var_17 = (unsigned char)165;
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
