#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1357914200U;
unsigned short var_3 = (unsigned short)11067;
unsigned long long int var_6 = 6106314237761575712ULL;
long long int var_8 = -5995558899256221724LL;
int var_9 = 684880630;
int var_10 = -44170401;
signed char var_11 = (signed char)-102;
int zero = 0;
unsigned char var_13 = (unsigned char)246;
short var_14 = (short)-6324;
short var_15 = (short)10671;
int var_16 = -1591209622;
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
