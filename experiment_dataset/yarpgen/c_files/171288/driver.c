#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5906416966878872606LL;
long long int var_1 = 1485898652118149605LL;
long long int var_2 = 2371229910190808121LL;
long long int var_3 = 1413461713972460739LL;
long long int var_4 = 1036034511179832081LL;
long long int var_5 = -1899759460041389757LL;
long long int var_6 = -6669915150348727112LL;
long long int var_7 = -6834111183742646492LL;
long long int var_8 = -7479325747320086190LL;
long long int var_10 = 1802908998477266999LL;
long long int var_11 = 2659740292256642068LL;
long long int var_12 = -6858916687246221050LL;
int zero = 0;
long long int var_13 = -410184362585889690LL;
long long int var_14 = 1853842498767050981LL;
long long int var_15 = 5468946686504299504LL;
long long int var_16 = -1192963937514721429LL;
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
