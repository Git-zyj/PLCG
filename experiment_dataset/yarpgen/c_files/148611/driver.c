#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2193181963U;
int var_5 = 2085162357;
int var_6 = -275664185;
unsigned short var_8 = (unsigned short)14589;
unsigned char var_9 = (unsigned char)127;
unsigned short var_10 = (unsigned short)34257;
int zero = 0;
unsigned long long int var_12 = 15541495186879489415ULL;
unsigned int var_13 = 1737964957U;
unsigned long long int var_14 = 15110717094041085869ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
