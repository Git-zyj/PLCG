#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13723007159614075148ULL;
short var_4 = (short)-20736;
unsigned int var_6 = 3723001502U;
unsigned char var_7 = (unsigned char)76;
unsigned int var_8 = 2198832944U;
unsigned short var_12 = (unsigned short)8633;
int zero = 0;
unsigned long long int var_15 = 2174787157562041574ULL;
unsigned char var_16 = (unsigned char)153;
int var_17 = -1028063427;
signed char var_18 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
