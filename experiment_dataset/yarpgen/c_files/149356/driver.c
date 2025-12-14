#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13891331298588770578ULL;
unsigned long long int var_8 = 431907209669604065ULL;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-12716;
int zero = 0;
short var_12 = (short)-12927;
unsigned long long int var_13 = 13905025393768287545ULL;
short var_14 = (short)24137;
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
