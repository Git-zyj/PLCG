#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 4318123816622935603LL;
unsigned char var_2 = (unsigned char)75;
long long int var_3 = 5700727901382876920LL;
short var_4 = (short)26751;
int var_5 = 374592012;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)30451;
unsigned char var_13 = (unsigned char)28;
unsigned long long int var_14 = 11415577769538553409ULL;
int zero = 0;
int var_19 = -1191285930;
short var_20 = (short)7320;
unsigned int var_21 = 127840420U;
unsigned int var_22 = 1106777580U;
unsigned char var_23 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
