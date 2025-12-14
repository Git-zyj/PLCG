#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5803227821064491865ULL;
int var_1 = -2130826338;
unsigned int var_2 = 2586438874U;
long long int var_3 = 1448182395960613074LL;
unsigned int var_4 = 3750059439U;
int var_5 = 826652666;
unsigned int var_8 = 148845452U;
unsigned char var_9 = (unsigned char)207;
int var_10 = -347557149;
int zero = 0;
unsigned short var_11 = (unsigned short)48186;
signed char var_12 = (signed char)-60;
unsigned char var_13 = (unsigned char)123;
void init() {
}

void checksum() {
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
