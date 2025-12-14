#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -728649149;
unsigned int var_3 = 4105987487U;
unsigned int var_4 = 222934686U;
unsigned int var_6 = 1490158784U;
unsigned long long int var_7 = 18131078363549723176ULL;
unsigned int var_10 = 2289439370U;
unsigned int var_12 = 4160130931U;
unsigned long long int var_14 = 2810889227908486053ULL;
int var_15 = -13527660;
signed char var_17 = (signed char)-50;
int zero = 0;
int var_19 = -1602078165;
unsigned long long int var_20 = 15262010904089925093ULL;
void init() {
}

void checksum() {
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
