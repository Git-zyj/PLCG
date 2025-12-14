#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1880723771U;
signed char var_3 = (signed char)-56;
signed char var_4 = (signed char)55;
long long int var_5 = 3968512100310202390LL;
unsigned long long int var_7 = 2053379272009743575ULL;
unsigned int var_8 = 1741336718U;
unsigned long long int var_9 = 7847332411057567849ULL;
int var_11 = 546223681;
int zero = 0;
unsigned int var_12 = 1856698120U;
int var_13 = -742177209;
unsigned short var_14 = (unsigned short)38918;
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
