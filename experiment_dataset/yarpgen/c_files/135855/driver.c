#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10532296570342322251ULL;
unsigned int var_5 = 2542333164U;
unsigned int var_6 = 1432758684U;
unsigned long long int var_11 = 14275213518278657908ULL;
unsigned char var_12 = (unsigned char)46;
int zero = 0;
unsigned short var_17 = (unsigned short)12806;
signed char var_18 = (signed char)-38;
int var_19 = -1581289846;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
