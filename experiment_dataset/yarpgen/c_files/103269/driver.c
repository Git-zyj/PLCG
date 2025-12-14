#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -531731245;
unsigned int var_4 = 1203392102U;
unsigned char var_6 = (unsigned char)235;
signed char var_8 = (signed char)-7;
unsigned long long int var_9 = 6520692916582247899ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)141;
int var_11 = 1254753821;
unsigned int var_12 = 1699085512U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
