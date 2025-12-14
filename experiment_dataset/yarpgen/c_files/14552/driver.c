#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 955220295;
unsigned short var_3 = (unsigned short)51605;
short var_7 = (short)2666;
int var_11 = 1686500332;
int zero = 0;
unsigned int var_12 = 2129708024U;
unsigned char var_13 = (unsigned char)238;
unsigned short var_14 = (unsigned short)24648;
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
