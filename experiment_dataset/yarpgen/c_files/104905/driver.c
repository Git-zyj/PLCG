#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7730;
unsigned int var_3 = 1820587002U;
int var_5 = -1013806015;
unsigned int var_6 = 1937769628U;
unsigned short var_7 = (unsigned short)4555;
unsigned char var_8 = (unsigned char)41;
unsigned char var_11 = (unsigned char)221;
long long int var_13 = 3399843393299401564LL;
int zero = 0;
unsigned int var_14 = 85602498U;
short var_15 = (short)-4221;
int var_16 = 338096397;
void init() {
}

void checksum() {
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
