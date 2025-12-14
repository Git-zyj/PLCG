#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)12692;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)48500;
unsigned char var_8 = (unsigned char)221;
_Bool var_11 = (_Bool)1;
short var_12 = (short)24425;
unsigned char var_13 = (unsigned char)23;
unsigned char var_17 = (unsigned char)121;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
int var_22 = -1972741150;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
