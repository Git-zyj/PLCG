#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1432041919;
short var_1 = (short)-11066;
unsigned short var_2 = (unsigned short)16148;
short var_4 = (short)-32579;
short var_6 = (short)-2419;
short var_7 = (short)249;
unsigned long long int var_9 = 872767059609575159ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 222824715U;
unsigned char var_14 = (unsigned char)0;
unsigned long long int var_16 = 17734763497053044888ULL;
int var_18 = 693998835;
int zero = 0;
int var_19 = 358135374;
unsigned short var_20 = (unsigned short)8583;
unsigned char var_21 = (unsigned char)171;
short var_22 = (short)9839;
short var_23 = (short)13571;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
