#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)58;
signed char var_10 = (signed char)-65;
short var_11 = (short)-17163;
signed char var_13 = (signed char)-29;
int zero = 0;
signed char var_14 = (signed char)-90;
int var_15 = -359921363;
short var_16 = (short)2817;
int var_17 = 1588464398;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
