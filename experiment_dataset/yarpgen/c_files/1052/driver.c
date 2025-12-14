#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4034751491U;
signed char var_1 = (signed char)62;
unsigned char var_3 = (unsigned char)187;
unsigned int var_7 = 3769016140U;
unsigned long long int var_8 = 10154705920666231809ULL;
short var_10 = (short)11801;
short var_11 = (short)25132;
unsigned int var_12 = 4133088545U;
unsigned char var_13 = (unsigned char)161;
int var_14 = -146191123;
signed char var_17 = (signed char)-79;
unsigned char var_18 = (unsigned char)247;
int zero = 0;
unsigned long long int var_19 = 16184318524747668110ULL;
unsigned int var_20 = 2980882285U;
short var_21 = (short)-1056;
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
