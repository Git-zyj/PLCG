#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2126869353;
long long int var_2 = 4353854542437674443LL;
unsigned int var_3 = 1829923868U;
unsigned char var_4 = (unsigned char)204;
unsigned char var_10 = (unsigned char)166;
int zero = 0;
unsigned int var_11 = 2253621856U;
long long int var_12 = -3468826998525831461LL;
short var_13 = (short)17369;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
