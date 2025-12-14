#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33941;
unsigned char var_4 = (unsigned char)154;
unsigned char var_5 = (unsigned char)199;
unsigned short var_11 = (unsigned short)28995;
unsigned char var_12 = (unsigned char)205;
signed char var_13 = (signed char)118;
int var_14 = 130798380;
int zero = 0;
unsigned short var_16 = (unsigned short)65040;
int var_17 = -1608448207;
unsigned short var_18 = (unsigned short)30116;
unsigned long long int var_19 = 15087387872820027242ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
