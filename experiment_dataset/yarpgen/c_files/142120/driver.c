#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53615;
unsigned short var_5 = (unsigned short)63826;
unsigned long long int var_6 = 13849956359490409155ULL;
int var_10 = -1110680348;
unsigned char var_11 = (unsigned char)145;
unsigned short var_13 = (unsigned short)46232;
unsigned long long int var_14 = 9764723221995775871ULL;
unsigned char var_15 = (unsigned char)40;
int zero = 0;
signed char var_16 = (signed char)66;
unsigned short var_17 = (unsigned short)39953;
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
