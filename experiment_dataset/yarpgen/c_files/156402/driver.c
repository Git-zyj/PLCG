#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 13151819186384829905ULL;
unsigned long long int var_5 = 9886162265992858541ULL;
long long int var_6 = -1365821586002406989LL;
int var_7 = -417726621;
_Bool var_12 = (_Bool)0;
int var_13 = -1682748539;
int zero = 0;
int var_15 = 1362896895;
unsigned short var_16 = (unsigned short)54673;
void init() {
}

void checksum() {
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
