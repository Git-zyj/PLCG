#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)154;
unsigned int var_4 = 4117340325U;
unsigned short var_6 = (unsigned short)14237;
unsigned short var_7 = (unsigned short)8810;
short var_8 = (short)-24964;
unsigned long long int var_9 = 10333706956524859672ULL;
unsigned char var_10 = (unsigned char)5;
unsigned int var_11 = 3235621346U;
int zero = 0;
unsigned long long int var_13 = 6520468984976841856ULL;
unsigned long long int var_14 = 9504819456369743710ULL;
unsigned char var_15 = (unsigned char)73;
unsigned int var_16 = 3550206937U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
