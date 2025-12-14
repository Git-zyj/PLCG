#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36988;
unsigned char var_4 = (unsigned char)168;
int var_6 = -1544729285;
unsigned short var_8 = (unsigned short)2029;
unsigned long long int var_9 = 12329244225712956529ULL;
unsigned char var_10 = (unsigned char)185;
unsigned int var_12 = 3529726924U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 15218702240300805312ULL;
unsigned short var_17 = (unsigned short)19587;
signed char var_18 = (signed char)-46;
short var_19 = (short)29192;
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
