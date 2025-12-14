#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17568668207247996621ULL;
int var_6 = -1373631500;
long long int var_10 = -722876332160168357LL;
int zero = 0;
long long int var_14 = -7127977414613935408LL;
long long int var_15 = 1495501704883695305LL;
void init() {
}

void checksum() {
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
