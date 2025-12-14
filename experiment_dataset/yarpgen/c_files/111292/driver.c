#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1163361768;
unsigned long long int var_3 = 11661294122362350909ULL;
unsigned long long int var_6 = 14314788617311756846ULL;
int var_7 = -2121613810;
int var_10 = 1837497740;
int var_11 = -948661888;
int zero = 0;
unsigned long long int var_13 = 7500319762424758619ULL;
int var_14 = 1283952745;
int var_15 = 1668922503;
int var_16 = -1474423185;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
