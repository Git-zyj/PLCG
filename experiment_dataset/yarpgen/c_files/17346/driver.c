#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1469130124U;
unsigned int var_4 = 2536633935U;
unsigned char var_7 = (unsigned char)14;
long long int var_8 = -7757430342515795301LL;
unsigned int var_13 = 1791610730U;
int zero = 0;
long long int var_15 = 4614286655216483713LL;
short var_16 = (short)-27793;
unsigned char var_17 = (unsigned char)67;
unsigned int var_18 = 2584502830U;
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
