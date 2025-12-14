#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4642932338978687736ULL;
unsigned int var_6 = 3687557647U;
unsigned long long int var_8 = 17377033519145205074ULL;
unsigned char var_15 = (unsigned char)74;
int zero = 0;
short var_19 = (short)-17074;
signed char var_20 = (signed char)48;
unsigned char var_21 = (unsigned char)238;
void init() {
}

void checksum() {
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
