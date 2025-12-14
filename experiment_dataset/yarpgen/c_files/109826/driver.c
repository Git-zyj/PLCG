#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2756125728U;
short var_5 = (short)-10678;
unsigned int var_6 = 1765738950U;
unsigned long long int var_10 = 13773653011160976267ULL;
signed char var_11 = (signed char)-17;
unsigned int var_13 = 105809633U;
unsigned char var_14 = (unsigned char)22;
unsigned char var_15 = (unsigned char)253;
int zero = 0;
unsigned int var_16 = 985341672U;
unsigned char var_17 = (unsigned char)201;
int var_18 = -1166955116;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
