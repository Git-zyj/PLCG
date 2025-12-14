#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
unsigned char var_1 = (unsigned char)201;
unsigned short var_3 = (unsigned short)17260;
unsigned char var_4 = (unsigned char)17;
unsigned int var_7 = 339743515U;
long long int var_9 = 3805656914391278203LL;
int zero = 0;
unsigned int var_10 = 3836953585U;
int var_11 = -1443251072;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
