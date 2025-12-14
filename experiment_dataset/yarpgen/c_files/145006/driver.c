#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31321;
unsigned char var_9 = (unsigned char)196;
unsigned short var_14 = (unsigned short)44389;
unsigned short var_16 = (unsigned short)55861;
short var_17 = (short)-7637;
int zero = 0;
long long int var_19 = -9043953428686588090LL;
unsigned short var_20 = (unsigned short)60386;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
