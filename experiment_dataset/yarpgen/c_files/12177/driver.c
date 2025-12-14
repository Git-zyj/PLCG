#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)195;
signed char var_11 = (signed char)-53;
unsigned char var_12 = (unsigned char)218;
int zero = 0;
long long int var_17 = -3196545571626494229LL;
unsigned long long int var_18 = 10447848365820379796ULL;
unsigned int var_19 = 384330080U;
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
