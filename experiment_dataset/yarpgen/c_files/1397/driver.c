#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2508941419843648955ULL;
int var_4 = -1880409096;
unsigned int var_7 = 894627354U;
int zero = 0;
unsigned short var_10 = (unsigned short)8644;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1205189778U;
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
