#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7598477113828416654LL;
unsigned char var_1 = (unsigned char)131;
unsigned char var_6 = (unsigned char)11;
signed char var_8 = (signed char)-53;
unsigned int var_9 = 849253885U;
short var_12 = (short)-18712;
int zero = 0;
unsigned char var_14 = (unsigned char)88;
long long int var_15 = 5680620024025796270LL;
signed char var_16 = (signed char)106;
unsigned char var_17 = (unsigned char)8;
signed char var_18 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
