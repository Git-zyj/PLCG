#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -258092528;
unsigned int var_1 = 4192764331U;
_Bool var_2 = (_Bool)0;
int var_3 = 140959536;
unsigned short var_4 = (unsigned short)19049;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_10 = -3029195098093157928LL;
unsigned short var_14 = (unsigned short)59021;
unsigned long long int var_16 = 6529294166122677124ULL;
short var_17 = (short)-16760;
int zero = 0;
int var_20 = 112610662;
long long int var_21 = -9094631064077500391LL;
unsigned char var_22 = (unsigned char)230;
short var_23 = (short)11091;
int var_24 = -2025164377;
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
