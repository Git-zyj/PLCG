#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11718774360579495081ULL;
signed char var_6 = (signed char)(-127 - 1);
unsigned short var_8 = (unsigned short)56608;
unsigned char var_9 = (unsigned char)72;
unsigned short var_11 = (unsigned short)17449;
unsigned char var_13 = (unsigned char)152;
int zero = 0;
unsigned short var_15 = (unsigned short)271;
unsigned char var_16 = (unsigned char)243;
unsigned long long int var_17 = 625220308656367267ULL;
void init() {
}

void checksum() {
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
