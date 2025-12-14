#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10084320984554995676ULL;
unsigned int var_2 = 3628076879U;
unsigned char var_3 = (unsigned char)128;
unsigned char var_4 = (unsigned char)247;
signed char var_5 = (signed char)65;
unsigned int var_11 = 652945332U;
unsigned char var_12 = (unsigned char)175;
int zero = 0;
unsigned long long int var_13 = 3986642899840923879ULL;
long long int var_14 = -5087194359560138671LL;
void init() {
}

void checksum() {
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
