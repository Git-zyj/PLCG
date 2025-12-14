#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)9;
unsigned int var_5 = 659828236U;
int var_8 = 2042150266;
int var_16 = -477591330;
int zero = 0;
short var_18 = (short)5342;
long long int var_19 = -1064450890128173576LL;
unsigned int var_20 = 2507676775U;
unsigned long long int var_21 = 17597613295108344414ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
