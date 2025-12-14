#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)233;
unsigned short var_3 = (unsigned short)20631;
unsigned long long int var_6 = 4146631910068522285ULL;
unsigned short var_8 = (unsigned short)36898;
int zero = 0;
short var_10 = (short)-258;
unsigned char var_11 = (unsigned char)14;
unsigned short var_12 = (unsigned short)50631;
unsigned int var_13 = 1579980354U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
