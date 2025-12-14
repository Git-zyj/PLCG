#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 53926;
int var_3 = -1357894760;
int var_11 = 1038262789;
int var_12 = 91684872;
long long int var_15 = 7975087301533119162LL;
long long int var_17 = 8177916181992387978LL;
int zero = 0;
int var_18 = -622199934;
long long int var_19 = -2279013505810563991LL;
int var_20 = 950264294;
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
