#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 15707189397783800580ULL;
unsigned char var_12 = (unsigned char)91;
signed char var_13 = (signed char)-125;
int zero = 0;
unsigned long long int var_14 = 6086607249072928782ULL;
short var_15 = (short)-2068;
unsigned char var_16 = (unsigned char)186;
signed char var_17 = (signed char)35;
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
