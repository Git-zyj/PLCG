#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6285134218924318116ULL;
unsigned long long int var_1 = 5359148622267450555ULL;
unsigned long long int var_6 = 10093896241935855256ULL;
unsigned char var_7 = (unsigned char)173;
unsigned int var_8 = 1711269410U;
int zero = 0;
unsigned int var_11 = 1737826062U;
unsigned int var_12 = 2812992169U;
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
