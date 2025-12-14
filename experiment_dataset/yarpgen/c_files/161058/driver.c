#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14348644293615591058ULL;
int var_4 = -932911085;
unsigned char var_5 = (unsigned char)243;
int var_8 = -1917334934;
unsigned char var_9 = (unsigned char)192;
signed char var_11 = (signed char)-27;
unsigned int var_13 = 1113147940U;
short var_15 = (short)27994;
int zero = 0;
signed char var_16 = (signed char)48;
unsigned short var_17 = (unsigned short)27755;
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
