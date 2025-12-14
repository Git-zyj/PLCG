#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13399;
_Bool var_2 = (_Bool)1;
unsigned char var_10 = (unsigned char)232;
unsigned short var_12 = (unsigned short)56644;
unsigned short var_18 = (unsigned short)62847;
unsigned long long int var_19 = 9637326390732471214ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)21059;
int var_22 = -553760247;
unsigned int var_23 = 3353740620U;
short var_24 = (short)-31083;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
