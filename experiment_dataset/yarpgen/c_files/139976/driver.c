#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32711;
long long int var_1 = 5493980776638549799LL;
long long int var_3 = -6477384541639263910LL;
short var_7 = (short)-5967;
int var_8 = 2116925011;
short var_9 = (short)14171;
unsigned int var_10 = 54854779U;
unsigned int var_11 = 3397903823U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)51337;
unsigned int var_14 = 3832877599U;
unsigned short var_15 = (unsigned short)43350;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
