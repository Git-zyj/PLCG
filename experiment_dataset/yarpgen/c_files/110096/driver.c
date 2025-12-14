#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22328;
unsigned long long int var_2 = 8274611510052864915ULL;
unsigned char var_4 = (unsigned char)32;
unsigned long long int var_8 = 3002188577852174230ULL;
unsigned char var_13 = (unsigned char)91;
int zero = 0;
unsigned short var_14 = (unsigned short)31539;
long long int var_15 = 8360977514809583557LL;
void init() {
}

void checksum() {
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
