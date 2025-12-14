#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)175;
unsigned long long int var_14 = 14197545248508023816ULL;
unsigned char var_15 = (unsigned char)184;
unsigned short var_17 = (unsigned short)34328;
int zero = 0;
unsigned short var_18 = (unsigned short)2201;
unsigned short var_19 = (unsigned short)43624;
unsigned short var_20 = (unsigned short)15365;
int var_21 = 1453121793;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
