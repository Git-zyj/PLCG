#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1786840794;
unsigned int var_7 = 1992924943U;
unsigned long long int var_16 = 3073477010276051412ULL;
unsigned short var_17 = (unsigned short)28354;
int zero = 0;
unsigned int var_19 = 3168338012U;
unsigned short var_20 = (unsigned short)8348;
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
