#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29618;
unsigned short var_6 = (unsigned short)62032;
short var_11 = (short)10975;
int zero = 0;
unsigned short var_12 = (unsigned short)14032;
unsigned short var_13 = (unsigned short)60255;
short var_14 = (short)-26749;
signed char var_15 = (signed char)-36;
long long int var_16 = 6161914361292925222LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
