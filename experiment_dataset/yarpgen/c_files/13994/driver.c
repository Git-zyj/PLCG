#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2972351284375060798ULL;
signed char var_1 = (signed char)109;
unsigned short var_3 = (unsigned short)55949;
unsigned short var_6 = (unsigned short)6737;
unsigned int var_7 = 122899505U;
int zero = 0;
unsigned short var_10 = (unsigned short)46574;
unsigned int var_11 = 88177743U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
