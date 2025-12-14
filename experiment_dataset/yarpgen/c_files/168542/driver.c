#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2153360685U;
short var_4 = (short)-11502;
unsigned char var_13 = (unsigned char)120;
int zero = 0;
long long int var_16 = -2527464747553110063LL;
unsigned long long int var_17 = 15868304363837041191ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
