#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1065188471;
unsigned int var_3 = 3849484354U;
int var_4 = 1622232877;
int var_6 = -1059148500;
int var_10 = -466327315;
unsigned int var_14 = 767425798U;
unsigned int var_15 = 1504382339U;
int zero = 0;
int var_17 = -496302483;
unsigned int var_18 = 3496879933U;
unsigned int var_19 = 1267541826U;
int var_20 = 1878882585;
unsigned int var_21 = 1448020176U;
int var_22 = 1960054629;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
