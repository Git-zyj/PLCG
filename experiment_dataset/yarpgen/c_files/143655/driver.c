#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -350179661;
unsigned long long int var_1 = 5652419110495830399ULL;
short var_2 = (short)12553;
int var_3 = 676189137;
short var_7 = (short)-7580;
short var_10 = (short)10924;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)15302;
unsigned short var_14 = (unsigned short)63684;
short var_15 = (short)-31595;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
