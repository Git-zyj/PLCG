#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 168474977;
int var_3 = -866199895;
int var_4 = -1010670487;
int var_8 = 1403351539;
int var_12 = 746628575;
int var_14 = 1355378552;
int var_15 = -1373919464;
int var_16 = 1353450622;
int var_17 = 233498049;
int zero = 0;
int var_18 = -999429855;
int var_19 = -396954098;
int var_20 = 1299230372;
int var_21 = -1942223553;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
