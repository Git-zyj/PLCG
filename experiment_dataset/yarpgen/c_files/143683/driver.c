#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30996;
unsigned long long int var_7 = 15888897896006463051ULL;
short var_9 = (short)-9934;
unsigned char var_10 = (unsigned char)96;
unsigned char var_12 = (unsigned char)208;
int zero = 0;
short var_15 = (short)26026;
unsigned char var_16 = (unsigned char)115;
unsigned short var_17 = (unsigned short)5919;
unsigned short var_18 = (unsigned short)28800;
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
