#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8709539783538236186LL;
unsigned int var_1 = 4225393397U;
unsigned int var_2 = 2538065110U;
unsigned short var_4 = (unsigned short)13566;
unsigned char var_5 = (unsigned char)152;
unsigned int var_6 = 757762890U;
long long int var_8 = -1768753972304761293LL;
unsigned int var_10 = 2898555119U;
unsigned char var_11 = (unsigned char)81;
int zero = 0;
unsigned char var_12 = (unsigned char)206;
long long int var_13 = -6317286075490130965LL;
unsigned int var_14 = 1794094936U;
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
