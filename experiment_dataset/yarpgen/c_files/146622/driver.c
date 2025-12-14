#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8314965019650771711ULL;
short var_1 = (short)-2464;
unsigned short var_3 = (unsigned short)56324;
unsigned long long int var_5 = 3927851640197579541ULL;
unsigned long long int var_7 = 5660549667139634397ULL;
signed char var_9 = (signed char)-20;
signed char var_10 = (signed char)46;
signed char var_11 = (signed char)34;
int zero = 0;
unsigned long long int var_12 = 2431434325797963275ULL;
unsigned long long int var_13 = 16884861259145296181ULL;
void init() {
}

void checksum() {
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
