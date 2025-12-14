#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2043541173;
int var_1 = -1469288783;
int var_4 = 1792645778;
int var_6 = 1260983892;
int var_7 = -974870613;
int var_8 = 1719098151;
int var_10 = 8518496;
int var_11 = 567050195;
int var_12 = -1322416980;
int var_13 = -1667430553;
int var_14 = -1928316903;
int var_15 = -1234324021;
int var_16 = -1773767956;
int var_17 = -1473513526;
int zero = 0;
int var_18 = 1677123432;
int var_19 = 354622791;
int var_20 = -777469597;
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
