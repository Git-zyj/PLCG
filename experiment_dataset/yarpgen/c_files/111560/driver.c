#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8063792763481892855LL;
short var_1 = (short)21767;
unsigned int var_3 = 2227191580U;
unsigned short var_4 = (unsigned short)27808;
signed char var_5 = (signed char)-56;
unsigned int var_7 = 1743324767U;
short var_9 = (short)27488;
unsigned char var_12 = (unsigned char)211;
long long int var_13 = -4735812640574824569LL;
int zero = 0;
unsigned short var_14 = (unsigned short)53433;
signed char var_15 = (signed char)6;
unsigned long long int var_16 = 16689239374050921698ULL;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)172;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
