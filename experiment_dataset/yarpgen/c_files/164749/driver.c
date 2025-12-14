#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8453624819676494386ULL;
short var_6 = (short)31220;
int var_12 = -1836956871;
short var_13 = (short)-14314;
unsigned int var_16 = 2290313643U;
int zero = 0;
unsigned short var_20 = (unsigned short)22949;
unsigned long long int var_21 = 13269906135926463185ULL;
unsigned int var_22 = 3551749233U;
unsigned short var_23 = (unsigned short)46284;
unsigned long long int var_24 = 5588353767470112331ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
