#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-27317;
int var_8 = -697894067;
short var_9 = (short)16107;
int zero = 0;
unsigned short var_10 = (unsigned short)7456;
int var_11 = 1705173110;
unsigned long long int var_12 = 18377370319005177447ULL;
unsigned int var_13 = 2323836948U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
