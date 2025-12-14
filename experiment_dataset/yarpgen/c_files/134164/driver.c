#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10098;
unsigned int var_4 = 3328547601U;
short var_5 = (short)-12941;
unsigned long long int var_6 = 12516599513187167740ULL;
int var_8 = -61979294;
int zero = 0;
signed char var_10 = (signed char)19;
unsigned char var_11 = (unsigned char)252;
unsigned int var_12 = 1109558484U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
