#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1047963489;
short var_3 = (short)-26485;
unsigned char var_9 = (unsigned char)212;
unsigned short var_12 = (unsigned short)50631;
unsigned char var_14 = (unsigned char)43;
int zero = 0;
unsigned long long int var_15 = 8510416305696011619ULL;
int var_16 = -1538029997;
signed char var_17 = (signed char)-113;
unsigned short var_18 = (unsigned short)52885;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
