#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)190;
unsigned short var_2 = (unsigned short)13452;
signed char var_3 = (signed char)-66;
unsigned int var_12 = 108606093U;
int zero = 0;
signed char var_14 = (signed char)50;
short var_15 = (short)-14940;
void init() {
}

void checksum() {
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
