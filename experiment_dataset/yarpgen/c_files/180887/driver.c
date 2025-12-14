#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -753664557;
unsigned char var_1 = (unsigned char)237;
long long int var_3 = 6007873363518731003LL;
int var_4 = 1105612393;
int var_5 = 1882012300;
int var_6 = -1269489880;
int var_8 = 807845919;
short var_11 = (short)-32170;
int zero = 0;
long long int var_13 = 6690793427680101245LL;
unsigned int var_14 = 2211498352U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
