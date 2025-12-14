#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1433694227271539714ULL;
unsigned long long int var_6 = 15936521426692382138ULL;
int var_8 = -450986558;
unsigned int var_11 = 916597314U;
unsigned int var_12 = 3675665938U;
short var_15 = (short)29550;
int zero = 0;
unsigned short var_16 = (unsigned short)2358;
signed char var_17 = (signed char)85;
unsigned long long int var_18 = 14262908582243883399ULL;
unsigned char var_19 = (unsigned char)46;
unsigned int var_20 = 2831104320U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
