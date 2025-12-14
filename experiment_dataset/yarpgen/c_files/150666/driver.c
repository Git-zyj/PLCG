#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28603;
long long int var_1 = 5778869336355745331LL;
unsigned char var_4 = (unsigned char)186;
unsigned short var_5 = (unsigned short)2517;
short var_9 = (short)-31361;
unsigned short var_10 = (unsigned short)43238;
int zero = 0;
int var_12 = 735388641;
unsigned int var_13 = 3413297501U;
signed char var_14 = (signed char)-40;
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
