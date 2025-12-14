#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
short var_5 = (short)-24792;
unsigned char var_12 = (unsigned char)149;
short var_14 = (short)28764;
unsigned short var_15 = (unsigned short)60695;
unsigned char var_16 = (unsigned char)21;
int zero = 0;
unsigned long long int var_19 = 14265372687289677873ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
