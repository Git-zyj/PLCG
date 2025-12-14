#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5934001429252964753LL;
unsigned int var_2 = 3645946617U;
int var_4 = -2019318825;
unsigned short var_5 = (unsigned short)38851;
long long int var_6 = -7009238164932978699LL;
signed char var_12 = (signed char)118;
unsigned short var_14 = (unsigned short)33150;
unsigned char var_15 = (unsigned char)149;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 2561799570210560904ULL;
void init() {
}

void checksum() {
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
