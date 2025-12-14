#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2006422268;
unsigned short var_1 = (unsigned short)48303;
signed char var_3 = (signed char)-37;
unsigned long long int var_5 = 6236881119954635642ULL;
unsigned char var_10 = (unsigned char)223;
int zero = 0;
int var_12 = -39636819;
long long int var_13 = 5985597337691880028LL;
long long int var_14 = -8538790553545717183LL;
unsigned short var_15 = (unsigned short)34993;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
