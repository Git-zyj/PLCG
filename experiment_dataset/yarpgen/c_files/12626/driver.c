#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2296411013677120212LL;
long long int var_1 = -5608981278463899007LL;
unsigned long long int var_3 = 2267954763331981473ULL;
long long int var_6 = 1580113145162840527LL;
short var_8 = (short)-13210;
short var_9 = (short)27950;
int zero = 0;
unsigned long long int var_10 = 5394111989741277854ULL;
unsigned long long int var_11 = 14191740129180407012ULL;
long long int var_12 = -2256994146020518659LL;
unsigned char var_13 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
