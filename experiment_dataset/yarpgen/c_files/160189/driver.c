#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5096;
short var_1 = (short)-18639;
int var_4 = -1875868965;
unsigned short var_5 = (unsigned short)31838;
int zero = 0;
int var_10 = 2021860771;
long long int var_11 = 3152187904823919165LL;
short var_12 = (short)21587;
unsigned char var_13 = (unsigned char)172;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
