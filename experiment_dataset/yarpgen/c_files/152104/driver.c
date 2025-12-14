#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19920;
int var_5 = 2082012195;
unsigned char var_9 = (unsigned char)191;
unsigned char var_11 = (unsigned char)85;
int zero = 0;
unsigned short var_15 = (unsigned short)44243;
signed char var_16 = (signed char)-5;
unsigned long long int var_17 = 1435939376314130204ULL;
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
