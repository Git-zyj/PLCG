#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)86;
unsigned short var_5 = (unsigned short)12254;
unsigned short var_6 = (unsigned short)14209;
short var_8 = (short)19907;
long long int var_9 = 1172824274282053153LL;
int var_10 = -127261297;
int zero = 0;
unsigned int var_11 = 1594929183U;
short var_12 = (short)-22373;
unsigned short var_13 = (unsigned short)47604;
unsigned int var_14 = 3864774801U;
unsigned char var_15 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
