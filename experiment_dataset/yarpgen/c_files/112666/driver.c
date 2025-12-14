#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43605;
long long int var_2 = 1455708279119598370LL;
long long int var_3 = 383253205403031675LL;
unsigned char var_4 = (unsigned char)236;
int var_5 = 471266034;
unsigned char var_7 = (unsigned char)30;
unsigned short var_10 = (unsigned short)49726;
short var_13 = (short)13653;
int zero = 0;
int var_16 = 2070948553;
unsigned short var_17 = (unsigned short)49925;
long long int var_18 = 6124608417890943466LL;
short var_19 = (short)32390;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
