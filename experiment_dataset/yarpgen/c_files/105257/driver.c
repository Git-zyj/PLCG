#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)19;
unsigned char var_4 = (unsigned char)166;
unsigned char var_5 = (unsigned char)4;
unsigned long long int var_9 = 12363176896455731404ULL;
long long int var_13 = -5786185475645924618LL;
signed char var_15 = (signed char)1;
int zero = 0;
short var_18 = (short)-14140;
unsigned long long int var_19 = 14663797800082651174ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
