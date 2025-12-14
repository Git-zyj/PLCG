#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)0;
long long int var_6 = 7042216252475929985LL;
unsigned long long int var_7 = 7985746626101941950ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
long long int var_13 = 3421653203355068095LL;
long long int var_14 = -7628152703780239726LL;
unsigned long long int var_15 = 18220976315668800710ULL;
long long int var_16 = -5877777015876819681LL;
long long int var_17 = -2302100169128997744LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
