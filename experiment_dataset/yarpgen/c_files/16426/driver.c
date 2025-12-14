#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -331981092;
unsigned long long int var_3 = 5912647022901506114ULL;
unsigned short var_4 = (unsigned short)5539;
unsigned long long int var_5 = 5208619509657074572ULL;
int zero = 0;
unsigned int var_10 = 3551721039U;
unsigned int var_11 = 2927489680U;
unsigned char var_12 = (unsigned char)142;
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
