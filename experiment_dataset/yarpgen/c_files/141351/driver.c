#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5880401768214258037LL;
long long int var_7 = -4776365595057085005LL;
long long int var_8 = 9046128618806495301LL;
long long int var_9 = -4086763046750013980LL;
int zero = 0;
long long int var_12 = -1159284789312241429LL;
long long int var_13 = 1618441150179420279LL;
long long int var_14 = -7962465779346704905LL;
long long int var_15 = -734987605211409892LL;
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
