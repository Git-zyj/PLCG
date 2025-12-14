#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -637232958995944519LL;
signed char var_5 = (signed char)93;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)20940;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)183;
unsigned char var_15 = (unsigned char)192;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_19 = 573973997979987065LL;
unsigned char var_20 = (unsigned char)23;
short var_21 = (short)-12935;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
