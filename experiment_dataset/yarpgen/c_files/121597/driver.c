#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)24667;
unsigned char var_4 = (unsigned char)156;
short var_7 = (short)10400;
unsigned int var_10 = 603698659U;
unsigned long long int var_11 = 4812555192528398110ULL;
signed char var_15 = (signed char)12;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)-12050;
short var_18 = (short)13888;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
