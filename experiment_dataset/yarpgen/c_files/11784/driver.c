#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)146;
_Bool var_2 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)183;
unsigned int var_12 = 1999208726U;
unsigned long long int var_13 = 10451008451586399736ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)144;
unsigned char var_16 = (unsigned char)16;
unsigned char var_17 = (unsigned char)11;
unsigned int var_18 = 703254512U;
void init() {
}

void checksum() {
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
