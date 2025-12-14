#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-27467;
unsigned char var_8 = (unsigned char)143;
unsigned long long int var_9 = 135254369437722361ULL;
unsigned long long int var_10 = 1365504423975212904ULL;
int var_11 = 340720407;
int zero = 0;
int var_16 = -849599212;
int var_17 = -739330078;
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
