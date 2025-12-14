#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2139288015;
unsigned short var_6 = (unsigned short)9102;
int var_13 = 236034777;
short var_15 = (short)-9452;
int zero = 0;
unsigned int var_16 = 4208792372U;
int var_17 = 55124329;
void init() {
}

void checksum() {
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
