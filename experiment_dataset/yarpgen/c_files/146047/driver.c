#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2797459833U;
unsigned long long int var_5 = 3084124997364254092ULL;
unsigned int var_6 = 3348792558U;
int var_10 = -1161371273;
unsigned int var_12 = 4047953647U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 3429158031U;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 13106423630810539969ULL;
int var_18 = 754588501;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
