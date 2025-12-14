#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21769;
unsigned long long int var_4 = 15978921749871177986ULL;
signed char var_8 = (signed char)-99;
signed char var_13 = (signed char)-45;
unsigned int var_14 = 715809612U;
unsigned short var_15 = (unsigned short)46522;
int zero = 0;
unsigned char var_16 = (unsigned char)247;
unsigned char var_17 = (unsigned char)204;
unsigned short var_18 = (unsigned short)4292;
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
