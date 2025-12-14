#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_5 = -1522232664;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)125;
unsigned char var_11 = (unsigned char)244;
unsigned int var_15 = 491718054U;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)154;
int zero = 0;
int var_20 = -952572030;
short var_21 = (short)-26211;
unsigned short var_22 = (unsigned short)32244;
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
