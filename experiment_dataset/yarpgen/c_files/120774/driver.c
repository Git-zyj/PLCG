#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1503260869U;
unsigned char var_9 = (unsigned char)44;
unsigned char var_14 = (unsigned char)232;
unsigned long long int var_15 = 12327721803012828677ULL;
unsigned long long int var_16 = 364268287433452403ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)55192;
short var_18 = (short)-8260;
void init() {
}

void checksum() {
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
