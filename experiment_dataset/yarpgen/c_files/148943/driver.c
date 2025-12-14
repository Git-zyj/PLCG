#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1307871753;
unsigned short var_1 = (unsigned short)57972;
unsigned short var_4 = (unsigned short)0;
unsigned char var_6 = (unsigned char)165;
signed char var_7 = (signed char)56;
unsigned short var_8 = (unsigned short)65030;
int zero = 0;
unsigned int var_10 = 1527974735U;
unsigned char var_11 = (unsigned char)75;
unsigned long long int var_12 = 18164499279683325888ULL;
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
