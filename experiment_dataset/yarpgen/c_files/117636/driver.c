#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 10100718282367904308ULL;
unsigned char var_5 = (unsigned char)128;
unsigned int var_9 = 1239227560U;
int var_12 = 303067940;
long long int var_13 = 6940505695466160386LL;
int var_14 = 590778969;
unsigned short var_17 = (unsigned short)20088;
unsigned short var_18 = (unsigned short)53416;
int zero = 0;
int var_19 = 468421247;
unsigned char var_20 = (unsigned char)179;
short var_21 = (short)21432;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
