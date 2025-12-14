#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2077042525;
short var_1 = (short)12814;
long long int var_3 = -2669890780061695490LL;
unsigned char var_4 = (unsigned char)250;
unsigned char var_5 = (unsigned char)42;
unsigned char var_6 = (unsigned char)21;
unsigned char var_8 = (unsigned char)98;
int var_10 = 412006237;
unsigned int var_11 = 1728641314U;
int zero = 0;
int var_12 = -971299697;
int var_13 = 1542960620;
short var_14 = (short)-23492;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 9157709093191756159ULL;
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
