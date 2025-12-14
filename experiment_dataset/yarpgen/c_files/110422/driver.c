#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -835664648;
unsigned short var_1 = (unsigned short)43819;
unsigned int var_3 = 2782860307U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 6216106309885101897ULL;
unsigned char var_6 = (unsigned char)77;
unsigned int var_7 = 3913640030U;
unsigned int var_8 = 1764576150U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)149;
int var_11 = -1838348106;
unsigned int var_12 = 1024958185U;
short var_13 = (short)-30722;
unsigned long long int var_14 = 10332265567441723082ULL;
unsigned long long int var_15 = 6732130281938563757ULL;
short var_16 = (short)-6094;
unsigned short var_17 = (unsigned short)16601;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)8;
_Bool var_20 = (_Bool)0;
short var_21 = (short)4753;
int var_22 = 379461611;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
