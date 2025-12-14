#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2946235626988961109LL;
unsigned int var_4 = 1426945100U;
long long int var_10 = 1240721756151648962LL;
long long int var_15 = -2866107823081428425LL;
int zero = 0;
long long int var_18 = 4120620107725622959LL;
unsigned int var_19 = 1425330802U;
long long int var_20 = -8293931227662028497LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
