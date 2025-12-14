#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-28600;
long long int var_7 = -9098820424599863100LL;
unsigned short var_8 = (unsigned short)14727;
unsigned char var_13 = (unsigned char)150;
int zero = 0;
unsigned int var_17 = 1569656378U;
signed char var_18 = (signed char)-4;
short var_19 = (short)-13521;
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
