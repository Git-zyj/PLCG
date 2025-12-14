#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1858400150U;
unsigned long long int var_1 = 511473496429110474ULL;
unsigned int var_4 = 2251552116U;
unsigned int var_5 = 3478464079U;
unsigned char var_6 = (unsigned char)60;
signed char var_7 = (signed char)-45;
unsigned short var_9 = (unsigned short)23179;
signed char var_10 = (signed char)116;
unsigned short var_11 = (unsigned short)15650;
unsigned long long int var_13 = 1886826411969956841ULL;
unsigned short var_15 = (unsigned short)6678;
signed char var_16 = (signed char)-94;
int zero = 0;
unsigned char var_17 = (unsigned char)48;
unsigned short var_18 = (unsigned short)44624;
unsigned long long int var_19 = 14301378142957175652ULL;
void init() {
}

void checksum() {
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
