#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
short var_2 = (short)5021;
int var_3 = 1456002320;
short var_5 = (short)10182;
unsigned int var_6 = 805159026U;
unsigned int var_17 = 3750937456U;
int zero = 0;
unsigned int var_19 = 2482715379U;
short var_20 = (short)29103;
unsigned long long int var_21 = 4081240555348421853ULL;
unsigned char var_22 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
