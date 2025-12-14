#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4571320521984702199ULL;
unsigned long long int var_1 = 11921312049445430670ULL;
unsigned char var_2 = (unsigned char)213;
unsigned short var_5 = (unsigned short)23921;
signed char var_7 = (signed char)-4;
unsigned char var_8 = (unsigned char)30;
long long int var_10 = -842354809108984845LL;
signed char var_11 = (signed char)-84;
unsigned short var_12 = (unsigned short)29433;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)5769;
signed char var_16 = (signed char)74;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
