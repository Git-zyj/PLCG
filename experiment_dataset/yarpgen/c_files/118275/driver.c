#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1834006608;
unsigned short var_1 = (unsigned short)18345;
int var_2 = 1486126477;
unsigned int var_3 = 2573420464U;
unsigned int var_7 = 3874965313U;
unsigned int var_8 = 1662029026U;
int zero = 0;
unsigned char var_15 = (unsigned char)4;
unsigned int var_16 = 778554738U;
signed char var_17 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
