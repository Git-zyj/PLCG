#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-22;
short var_4 = (short)11920;
unsigned char var_5 = (unsigned char)123;
int var_6 = -116568390;
unsigned int var_7 = 2092454498U;
int zero = 0;
unsigned long long int var_17 = 17952183265720510115ULL;
int var_18 = -934528318;
int var_19 = -1558245678;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
