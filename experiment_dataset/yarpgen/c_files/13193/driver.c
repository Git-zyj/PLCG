#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)1;
long long int var_6 = 1249639422658966675LL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)3690;
int var_9 = -392220719;
int zero = 0;
unsigned short var_10 = (unsigned short)2860;
short var_11 = (short)8410;
long long int var_12 = 7414935128363419495LL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
