#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32604;
unsigned char var_5 = (unsigned char)245;
unsigned char var_8 = (unsigned char)13;
unsigned int var_10 = 809229715U;
unsigned char var_12 = (unsigned char)41;
unsigned long long int var_15 = 7372942803538199651ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)106;
unsigned int var_19 = 731806445U;
short var_20 = (short)8127;
unsigned char var_21 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
