#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8424;
_Bool var_1 = (_Bool)0;
int var_6 = -1823688299;
short var_9 = (short)-16020;
unsigned short var_10 = (unsigned short)24524;
unsigned long long int var_11 = 1298974848584665621ULL;
int zero = 0;
signed char var_13 = (signed char)127;
unsigned char var_14 = (unsigned char)206;
int var_15 = -246532995;
int var_16 = -1315163900;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
