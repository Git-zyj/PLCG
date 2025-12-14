#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51266;
unsigned short var_5 = (unsigned short)32229;
unsigned char var_10 = (unsigned char)188;
unsigned long long int var_11 = 1988312332601132130ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)18043;
signed char var_16 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
