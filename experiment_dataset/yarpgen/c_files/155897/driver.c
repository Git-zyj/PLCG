#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32855;
unsigned int var_6 = 777478343U;
unsigned long long int var_9 = 16193087464845240175ULL;
unsigned char var_11 = (unsigned char)179;
unsigned long long int var_12 = 13986492454698757131ULL;
int var_13 = 1282941376;
unsigned long long int var_19 = 358576942349878237ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-5492;
unsigned char var_22 = (unsigned char)109;
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
