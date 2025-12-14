#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -1419496017;
unsigned short var_5 = (unsigned short)48752;
signed char var_7 = (signed char)70;
long long int var_8 = -185013715843932322LL;
int var_11 = -167230554;
short var_12 = (short)-24103;
signed char var_13 = (signed char)-15;
short var_15 = (short)-6095;
short var_18 = (short)16664;
int var_19 = 23922115;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)5;
int var_22 = -1421568205;
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
