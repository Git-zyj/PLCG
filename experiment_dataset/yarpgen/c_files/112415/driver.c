#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28332;
unsigned char var_4 = (unsigned char)6;
unsigned int var_8 = 1656888259U;
int zero = 0;
long long int var_11 = 850768655016068451LL;
unsigned short var_12 = (unsigned short)23488;
unsigned char var_13 = (unsigned char)167;
unsigned short var_14 = (unsigned short)64932;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
