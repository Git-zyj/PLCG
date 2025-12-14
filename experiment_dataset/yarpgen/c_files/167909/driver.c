#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2088027597U;
unsigned char var_2 = (unsigned char)231;
unsigned short var_8 = (unsigned short)38364;
unsigned char var_10 = (unsigned char)55;
unsigned char var_11 = (unsigned char)81;
unsigned long long int var_14 = 14330649311561013873ULL;
int zero = 0;
unsigned long long int var_16 = 12091845576732028604ULL;
unsigned long long int var_17 = 1119412875602196583ULL;
int var_18 = -548826147;
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
