#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6601574058811233782LL;
short var_11 = (short)14138;
unsigned char var_13 = (unsigned char)158;
short var_15 = (short)16044;
int zero = 0;
unsigned char var_16 = (unsigned char)116;
unsigned int var_17 = 3906594941U;
unsigned short var_18 = (unsigned short)34297;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
