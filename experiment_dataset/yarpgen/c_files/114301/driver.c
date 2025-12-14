#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23326;
short var_3 = (short)26000;
unsigned short var_6 = (unsigned short)41978;
unsigned short var_8 = (unsigned short)21329;
long long int var_9 = -2756308012180758950LL;
signed char var_10 = (signed char)-16;
int zero = 0;
long long int var_11 = 1118215045431621223LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-12148;
unsigned short var_14 = (unsigned short)37819;
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
