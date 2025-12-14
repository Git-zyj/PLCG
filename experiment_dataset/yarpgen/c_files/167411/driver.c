#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)122;
unsigned char var_4 = (unsigned char)239;
unsigned int var_6 = 2069870342U;
int var_7 = -755362652;
unsigned short var_11 = (unsigned short)43335;
long long int var_13 = 987883667486327240LL;
unsigned short var_15 = (unsigned short)37525;
int zero = 0;
unsigned int var_17 = 3038170734U;
unsigned int var_18 = 1425310978U;
unsigned char var_19 = (unsigned char)104;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
