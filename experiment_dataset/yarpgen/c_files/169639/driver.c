#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-14610;
unsigned char var_5 = (unsigned char)90;
int var_11 = 1825215149;
signed char var_16 = (signed char)-24;
int zero = 0;
unsigned short var_19 = (unsigned short)60958;
int var_20 = 393594257;
unsigned long long int var_21 = 9744704693832215332ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
