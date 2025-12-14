#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19205;
unsigned short var_6 = (unsigned short)5123;
short var_8 = (short)-8301;
unsigned char var_9 = (unsigned char)137;
unsigned char var_10 = (unsigned char)253;
long long int var_11 = -5508890625090181218LL;
unsigned long long int var_13 = 6431736255847772822ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)64718;
unsigned short var_15 = (unsigned short)18691;
unsigned long long int var_16 = 8944172210200393129ULL;
unsigned char var_17 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
