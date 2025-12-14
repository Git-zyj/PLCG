#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 191553140;
unsigned char var_1 = (unsigned char)226;
unsigned int var_4 = 2108009171U;
long long int var_7 = -3058993640650888319LL;
int var_12 = -50692812;
unsigned short var_14 = (unsigned short)63727;
unsigned short var_16 = (unsigned short)58;
int zero = 0;
unsigned char var_19 = (unsigned char)10;
unsigned long long int var_20 = 11774816977868959403ULL;
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
