#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 763318187U;
unsigned char var_8 = (unsigned char)193;
unsigned long long int var_10 = 9639329827406001220ULL;
unsigned int var_11 = 292616784U;
unsigned int var_12 = 4153996682U;
unsigned short var_14 = (unsigned short)60660;
short var_16 = (short)-21321;
int zero = 0;
unsigned long long int var_17 = 5577990219482630133ULL;
unsigned long long int var_18 = 11448337138601778333ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
