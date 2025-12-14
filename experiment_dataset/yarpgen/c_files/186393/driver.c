#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1469622772U;
unsigned int var_1 = 3167199243U;
unsigned int var_2 = 3030429970U;
unsigned short var_4 = (unsigned short)39781;
unsigned short var_6 = (unsigned short)49603;
unsigned short var_7 = (unsigned short)13797;
unsigned short var_8 = (unsigned short)42440;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)48026;
unsigned char var_13 = (unsigned char)46;
unsigned short var_14 = (unsigned short)38024;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
