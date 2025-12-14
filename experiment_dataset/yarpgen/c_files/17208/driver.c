#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)243;
unsigned long long int var_4 = 3611592296720861587ULL;
unsigned char var_5 = (unsigned char)178;
int var_7 = 1738715803;
signed char var_8 = (signed char)-49;
unsigned int var_9 = 2759231583U;
short var_10 = (short)1020;
int var_11 = -1519462841;
int zero = 0;
int var_12 = -437350679;
long long int var_13 = 5011824754316533554LL;
unsigned short var_14 = (unsigned short)37161;
unsigned short var_15 = (unsigned short)2459;
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
