#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60238;
short var_6 = (short)16008;
unsigned char var_9 = (unsigned char)162;
int zero = 0;
unsigned char var_15 = (unsigned char)159;
unsigned short var_16 = (unsigned short)28686;
unsigned short var_17 = (unsigned short)35562;
unsigned long long int var_18 = 16820142648955856364ULL;
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
