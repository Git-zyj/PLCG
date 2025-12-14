#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3268816229053956762LL;
unsigned long long int var_2 = 9616005695580171657ULL;
int var_5 = -1310187281;
unsigned long long int var_14 = 12563372303720572487ULL;
unsigned int var_15 = 4101366679U;
int zero = 0;
long long int var_16 = -5062333239431776440LL;
unsigned int var_17 = 3846062503U;
void init() {
}

void checksum() {
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
