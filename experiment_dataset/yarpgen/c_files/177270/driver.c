#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7985361812791683801ULL;
unsigned long long int var_9 = 1019604410610492733ULL;
long long int var_11 = -7120534266866913354LL;
unsigned long long int var_12 = 2143479287431798380ULL;
unsigned short var_13 = (unsigned short)41666;
int zero = 0;
short var_16 = (short)29667;
unsigned int var_17 = 125426584U;
long long int var_18 = 1558559467642473583LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
