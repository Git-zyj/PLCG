#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14663;
long long int var_1 = -1482088330941182516LL;
unsigned short var_2 = (unsigned short)14420;
signed char var_4 = (signed char)-36;
unsigned char var_5 = (unsigned char)178;
signed char var_6 = (signed char)78;
unsigned char var_7 = (unsigned char)86;
unsigned int var_8 = 1045194382U;
unsigned short var_9 = (unsigned short)50969;
int zero = 0;
unsigned char var_11 = (unsigned char)30;
unsigned short var_12 = (unsigned short)3744;
long long int var_13 = -3070885318204167123LL;
unsigned char var_14 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
