#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9630;
unsigned long long int var_1 = 1488743277451980679ULL;
unsigned short var_2 = (unsigned short)60398;
unsigned short var_3 = (unsigned short)32110;
unsigned short var_4 = (unsigned short)45328;
unsigned long long int var_5 = 5028686511014482815ULL;
unsigned int var_6 = 2793552788U;
unsigned char var_8 = (unsigned char)19;
short var_9 = (short)-32511;
unsigned short var_11 = (unsigned short)18055;
int var_12 = 1757381258;
unsigned char var_13 = (unsigned char)222;
int zero = 0;
unsigned short var_14 = (unsigned short)55119;
unsigned int var_15 = 3055877652U;
unsigned char var_16 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
