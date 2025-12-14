#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20459;
unsigned char var_3 = (unsigned char)70;
unsigned char var_11 = (unsigned char)216;
unsigned int var_15 = 3923905717U;
int zero = 0;
unsigned long long int var_19 = 2751082271061508452ULL;
unsigned int var_20 = 3131954583U;
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
