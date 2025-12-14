#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)186;
unsigned short var_7 = (unsigned short)19012;
signed char var_8 = (signed char)71;
unsigned long long int var_11 = 8085043940032247408ULL;
unsigned char var_15 = (unsigned char)32;
int zero = 0;
unsigned char var_16 = (unsigned char)253;
unsigned short var_17 = (unsigned short)33968;
signed char var_18 = (signed char)-94;
unsigned char var_19 = (unsigned char)116;
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
