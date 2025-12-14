#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2911215798806516407LL;
short var_3 = (short)-26801;
unsigned long long int var_13 = 9307293313813400394ULL;
int zero = 0;
unsigned int var_15 = 3724119654U;
long long int var_16 = 295068284612757120LL;
long long int var_17 = -4809430797147755337LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
