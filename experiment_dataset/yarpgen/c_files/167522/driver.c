#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)164;
int var_2 = 1986581458;
unsigned int var_3 = 3875639215U;
unsigned int var_4 = 3010605147U;
int var_6 = -512035899;
short var_8 = (short)10562;
unsigned long long int var_9 = 3560582808350520528ULL;
int var_10 = -1778185961;
int zero = 0;
long long int var_11 = -2505841967480641981LL;
unsigned int var_12 = 3552534542U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
