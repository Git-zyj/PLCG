#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
unsigned char var_1 = (unsigned char)105;
unsigned long long int var_2 = 15833143854963945281ULL;
unsigned char var_3 = (unsigned char)204;
short var_4 = (short)-2438;
short var_9 = (short)-822;
int var_15 = -1558487440;
int zero = 0;
int var_16 = 1473705133;
unsigned short var_17 = (unsigned short)42794;
void init() {
}

void checksum() {
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
