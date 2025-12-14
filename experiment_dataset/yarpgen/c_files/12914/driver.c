#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
unsigned long long int var_1 = 7236483480069265746ULL;
short var_6 = (short)3164;
unsigned long long int var_7 = 18020785330356360338ULL;
unsigned int var_10 = 3811877703U;
unsigned int var_12 = 4060383251U;
unsigned long long int var_13 = 1938094300095311181ULL;
short var_16 = (short)-3134;
int zero = 0;
unsigned char var_20 = (unsigned char)167;
unsigned int var_21 = 620197139U;
short var_22 = (short)-27102;
unsigned short var_23 = (unsigned short)23552;
unsigned char var_24 = (unsigned char)205;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
