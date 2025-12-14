#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
int var_4 = 876320362;
int var_7 = 1450361311;
unsigned char var_11 = (unsigned char)11;
unsigned long long int var_12 = 18182592372782590780ULL;
int var_14 = -1754621804;
unsigned long long int var_15 = 8811632992289256810ULL;
int var_18 = -1022458027;
int zero = 0;
short var_20 = (short)-3343;
unsigned char var_21 = (unsigned char)124;
unsigned long long int var_22 = 13547963743698054728ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
