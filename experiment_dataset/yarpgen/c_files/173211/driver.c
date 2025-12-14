#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)290;
unsigned long long int var_2 = 16930240768846441514ULL;
short var_5 = (short)-8153;
unsigned int var_7 = 3691839299U;
unsigned char var_8 = (unsigned char)9;
short var_10 = (short)29623;
int zero = 0;
unsigned short var_12 = (unsigned short)64863;
unsigned int var_13 = 1678174295U;
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
