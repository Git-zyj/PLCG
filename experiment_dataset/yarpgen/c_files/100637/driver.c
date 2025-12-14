#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1996846386;
unsigned int var_3 = 3384018718U;
unsigned char var_4 = (unsigned char)153;
unsigned int var_5 = 1309216089U;
unsigned int var_7 = 3747610205U;
signed char var_8 = (signed char)-116;
unsigned short var_9 = (unsigned short)42706;
unsigned short var_10 = (unsigned short)2665;
int zero = 0;
unsigned short var_11 = (unsigned short)2009;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
