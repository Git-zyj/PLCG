#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)19;
unsigned char var_4 = (unsigned char)69;
long long int var_8 = 7297955027641889078LL;
unsigned short var_10 = (unsigned short)10007;
short var_15 = (short)-23548;
short var_17 = (short)32410;
int zero = 0;
long long int var_19 = 2558729298710132823LL;
unsigned char var_20 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
