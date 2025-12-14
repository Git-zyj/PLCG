#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
long long int var_1 = -5761433426026827637LL;
int var_5 = -516569407;
unsigned int var_9 = 4119605337U;
short var_10 = (short)18286;
unsigned short var_12 = (unsigned short)14112;
int zero = 0;
long long int var_14 = 4648511566113992774LL;
signed char var_15 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
