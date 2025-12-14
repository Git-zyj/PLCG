#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17713;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-13346;
unsigned short var_4 = (unsigned short)29979;
unsigned int var_5 = 460593235U;
unsigned char var_7 = (unsigned char)49;
_Bool var_9 = (_Bool)1;
long long int var_10 = 612173186689647415LL;
short var_12 = (short)30341;
int zero = 0;
long long int var_13 = -3779184594589601955LL;
long long int var_14 = -6698982955269360832LL;
void init() {
}

void checksum() {
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
