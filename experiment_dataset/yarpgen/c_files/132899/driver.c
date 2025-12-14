#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2075836892U;
unsigned short var_8 = (unsigned short)35640;
unsigned char var_9 = (unsigned char)73;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)2889;
short var_14 = (short)5542;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)3;
long long int var_17 = 7020358288478970526LL;
unsigned long long int var_18 = 7767882408841558877ULL;
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
