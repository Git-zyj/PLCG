#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)4845;
short var_7 = (short)-28694;
unsigned char var_8 = (unsigned char)168;
unsigned char var_10 = (unsigned char)122;
int zero = 0;
short var_12 = (short)21200;
int var_13 = -148481815;
long long int var_14 = 1344561038799152137LL;
unsigned short var_15 = (unsigned short)22646;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
