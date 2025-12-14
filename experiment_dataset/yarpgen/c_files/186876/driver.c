#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1140887784;
int var_4 = -1733966438;
int var_12 = 1320283232;
int var_13 = -1529952262;
unsigned long long int var_14 = 4829943515506711740ULL;
int zero = 0;
int var_18 = 2108983279;
unsigned long long int var_19 = 15782751681277907910ULL;
int var_20 = 1624350144;
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
