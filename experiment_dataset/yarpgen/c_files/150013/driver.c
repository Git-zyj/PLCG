#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
unsigned char var_1 = (unsigned char)115;
unsigned char var_2 = (unsigned char)9;
unsigned char var_3 = (unsigned char)172;
unsigned char var_4 = (unsigned char)35;
unsigned char var_5 = (unsigned char)74;
unsigned char var_7 = (unsigned char)172;
unsigned char var_9 = (unsigned char)129;
unsigned char var_11 = (unsigned char)75;
unsigned char var_12 = (unsigned char)64;
unsigned char var_13 = (unsigned char)253;
unsigned char var_14 = (unsigned char)61;
int zero = 0;
unsigned char var_15 = (unsigned char)60;
unsigned char var_16 = (unsigned char)65;
unsigned char var_17 = (unsigned char)30;
unsigned char var_18 = (unsigned char)155;
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
