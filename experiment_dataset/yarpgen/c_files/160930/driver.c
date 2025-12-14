#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11764;
int var_1 = -1115728171;
unsigned char var_4 = (unsigned char)10;
short var_5 = (short)5651;
unsigned long long int var_6 = 13298218840629415477ULL;
unsigned long long int var_7 = 3993191104981764749ULL;
short var_8 = (short)-30817;
unsigned char var_9 = (unsigned char)174;
int var_11 = 1902795758;
unsigned char var_15 = (unsigned char)194;
int zero = 0;
unsigned char var_16 = (unsigned char)99;
int var_17 = 1875459497;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
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
