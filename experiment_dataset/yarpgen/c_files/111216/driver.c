#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1977747749U;
unsigned short var_1 = (unsigned short)8693;
short var_9 = (short)10498;
unsigned char var_13 = (unsigned char)188;
int zero = 0;
unsigned short var_15 = (unsigned short)2900;
signed char var_16 = (signed char)-58;
unsigned char var_17 = (unsigned char)53;
short var_18 = (short)5545;
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
