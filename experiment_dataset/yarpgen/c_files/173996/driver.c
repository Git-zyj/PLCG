#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 230742412U;
long long int var_5 = -2981876848906702584LL;
unsigned char var_6 = (unsigned char)1;
short var_7 = (short)1950;
short var_8 = (short)17299;
int zero = 0;
unsigned char var_11 = (unsigned char)231;
short var_12 = (short)880;
long long int var_13 = -3358535716923046479LL;
void init() {
}

void checksum() {
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
