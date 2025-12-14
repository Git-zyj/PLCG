#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22751;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)183;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
int var_7 = -752864892;
unsigned char var_8 = (unsigned char)102;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)34924;
unsigned char var_11 = (unsigned char)32;
unsigned char var_13 = (unsigned char)54;
short var_14 = (short)20282;
int zero = 0;
short var_15 = (short)-26811;
unsigned long long int var_16 = 16398627426310808537ULL;
short var_17 = (short)12586;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
