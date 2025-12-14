#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3607553919871278303LL;
long long int var_1 = 6921747128327958675LL;
long long int var_12 = -7499572907237963716LL;
long long int var_13 = -457443741986569334LL;
int zero = 0;
long long int var_19 = -9209528607289994780LL;
long long int var_20 = 8369008823482886013LL;
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
