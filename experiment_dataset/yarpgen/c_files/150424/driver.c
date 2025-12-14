#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2132157259;
signed char var_3 = (signed char)-93;
unsigned long long int var_5 = 5649419798792878904ULL;
signed char var_8 = (signed char)7;
unsigned int var_9 = 144530630U;
short var_10 = (short)-23396;
unsigned char var_11 = (unsigned char)27;
unsigned long long int var_12 = 1774387431584149882ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)29927;
short var_14 = (short)-9092;
unsigned char var_15 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
