#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1380767112;
signed char var_6 = (signed char)34;
long long int var_7 = -8296629542199533010LL;
unsigned long long int var_11 = 10982371149476457641ULL;
unsigned long long int var_13 = 12517400287558436600ULL;
short var_15 = (short)-3556;
unsigned short var_17 = (unsigned short)11471;
int zero = 0;
int var_19 = 488859693;
unsigned char var_20 = (unsigned char)117;
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
