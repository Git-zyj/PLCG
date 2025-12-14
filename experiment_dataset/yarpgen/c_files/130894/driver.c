#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1871555868;
int var_1 = 1090938058;
int var_2 = -263368830;
int var_3 = -105852646;
int var_4 = 1920147733;
int var_5 = -1650316744;
int var_6 = 814713225;
int var_7 = 1965776426;
int var_8 = 1553604696;
int zero = 0;
int var_10 = 1589144183;
int var_11 = -1561970378;
int var_12 = -1280401298;
int var_13 = 1039019549;
int var_14 = 669151325;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
