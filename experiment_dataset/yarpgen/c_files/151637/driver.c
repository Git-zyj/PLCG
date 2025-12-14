#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)260;
signed char var_4 = (signed char)12;
signed char var_9 = (signed char)-92;
int var_10 = 94288305;
unsigned int var_12 = 2710197837U;
int zero = 0;
unsigned long long int var_13 = 2156942637960690191ULL;
unsigned short var_14 = (unsigned short)31177;
void init() {
}

void checksum() {
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
