#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -304970152;
signed char var_9 = (signed char)-70;
unsigned int var_10 = 2061640708U;
short var_13 = (short)-9173;
unsigned char var_14 = (unsigned char)226;
int zero = 0;
short var_16 = (short)-29496;
unsigned short var_17 = (unsigned short)39065;
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
