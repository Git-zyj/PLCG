#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8699423051933578973ULL;
int var_2 = -1492220940;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1603624673U;
unsigned short var_11 = (unsigned short)22013;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 533912338;
void init() {
}

void checksum() {
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
