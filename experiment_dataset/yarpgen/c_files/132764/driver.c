#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9657393825313612520ULL;
unsigned short var_5 = (unsigned short)33536;
unsigned long long int var_7 = 16709872122198765839ULL;
unsigned short var_13 = (unsigned short)50163;
int zero = 0;
unsigned long long int var_17 = 6887899199790579476ULL;
unsigned short var_18 = (unsigned short)63787;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
