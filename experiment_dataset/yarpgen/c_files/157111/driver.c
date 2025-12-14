#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9581967904036824542ULL;
unsigned long long int var_1 = 12758790820271281560ULL;
unsigned long long int var_2 = 15995234043888705589ULL;
unsigned long long int var_4 = 4970372442592188837ULL;
unsigned long long int var_6 = 4079006894711789982ULL;
unsigned long long int var_7 = 3195504271702885968ULL;
unsigned long long int var_10 = 3509583072432638154ULL;
unsigned long long int var_12 = 13074193566710275432ULL;
unsigned long long int var_14 = 18230792842074596428ULL;
int zero = 0;
unsigned long long int var_16 = 13913050517070377874ULL;
unsigned long long int var_17 = 5943304043218335139ULL;
unsigned long long int var_18 = 12366222714659181148ULL;
unsigned long long int var_19 = 29355706939790073ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
