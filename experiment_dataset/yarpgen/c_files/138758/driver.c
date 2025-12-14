#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 652116071704330372ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)255;
unsigned long long int var_7 = 2724035637182460183ULL;
signed char var_10 = (signed char)-27;
short var_11 = (short)14634;
int var_12 = -862855119;
int zero = 0;
int var_13 = -887649566;
short var_14 = (short)-28579;
unsigned char var_15 = (unsigned char)158;
unsigned short var_16 = (unsigned short)5772;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
