#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 707494376;
unsigned long long int var_1 = 8098502931403039912ULL;
unsigned char var_2 = (unsigned char)83;
unsigned long long int var_4 = 4991049599823691035ULL;
unsigned long long int var_5 = 433035967520230478ULL;
unsigned long long int var_8 = 18271054820075079715ULL;
unsigned long long int var_11 = 10101843103412369886ULL;
unsigned short var_12 = (unsigned short)59258;
int zero = 0;
unsigned long long int var_13 = 16255358329322246977ULL;
unsigned long long int var_14 = 457187226311588171ULL;
short var_15 = (short)18836;
short var_16 = (short)-20355;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
