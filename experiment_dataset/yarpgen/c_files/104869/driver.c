#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4145554938U;
int var_6 = -733867034;
int var_7 = -884257045;
unsigned int var_8 = 1883532270U;
short var_12 = (short)-27041;
int var_14 = -1362623528;
int zero = 0;
unsigned short var_15 = (unsigned short)24663;
unsigned long long int var_16 = 1931308231879705985ULL;
unsigned int var_17 = 2236541920U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
