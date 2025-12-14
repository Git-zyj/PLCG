#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2085877760;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)60;
unsigned int var_5 = 765758979U;
unsigned short var_7 = (unsigned short)45283;
short var_10 = (short)-10120;
int zero = 0;
int var_12 = 2116873508;
short var_13 = (short)-6626;
unsigned char var_14 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
