#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44942;
int var_4 = 163476884;
int var_5 = 1960257936;
_Bool var_7 = (_Bool)1;
int var_8 = 1125351167;
int zero = 0;
unsigned long long int var_10 = 1235302759454464155ULL;
int var_11 = 1214354522;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
