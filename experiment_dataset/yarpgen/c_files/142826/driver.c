#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1656;
short var_6 = (short)27397;
short var_7 = (short)-952;
unsigned long long int var_8 = 8630865468252437022ULL;
unsigned long long int var_9 = 7609669593091879020ULL;
short var_10 = (short)-1804;
unsigned int var_11 = 1789364169U;
int zero = 0;
short var_12 = (short)16985;
short var_13 = (short)15573;
unsigned short var_14 = (unsigned short)43922;
unsigned char var_15 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
