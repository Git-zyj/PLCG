#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1064350907;
short var_1 = (short)-22553;
short var_2 = (short)-19804;
signed char var_3 = (signed char)106;
int var_5 = 1932288012;
int var_7 = 1153458575;
unsigned short var_8 = (unsigned short)46065;
long long int var_10 = -2133972895218452917LL;
int zero = 0;
short var_11 = (short)16121;
unsigned char var_12 = (unsigned char)22;
signed char var_13 = (signed char)53;
int var_14 = -931529542;
unsigned int var_15 = 290247473U;
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
