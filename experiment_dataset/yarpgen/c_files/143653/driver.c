#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2987761372U;
unsigned char var_4 = (unsigned char)201;
unsigned int var_8 = 4095415332U;
unsigned long long int var_9 = 1791843073246122462ULL;
int zero = 0;
long long int var_10 = 5241236228057486821LL;
short var_11 = (short)-18866;
unsigned int var_12 = 645362972U;
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
