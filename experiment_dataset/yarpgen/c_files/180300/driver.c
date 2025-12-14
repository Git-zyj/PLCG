#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3767131207549500724ULL;
long long int var_4 = 5730874872858705898LL;
long long int var_5 = -8668991422891108340LL;
unsigned int var_8 = 3643829224U;
unsigned int var_9 = 1505379255U;
signed char var_11 = (signed char)-96;
int zero = 0;
unsigned char var_12 = (unsigned char)77;
long long int var_13 = -8867066737754645552LL;
unsigned int var_14 = 3275835043U;
short var_15 = (short)-6190;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
