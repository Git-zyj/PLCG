#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1546433852;
unsigned short var_5 = (unsigned short)55744;
long long int var_6 = 3283169758833100892LL;
signed char var_7 = (signed char)87;
short var_8 = (short)-7767;
unsigned int var_9 = 1306977355U;
unsigned short var_10 = (unsigned short)11404;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-19298;
unsigned short var_14 = (unsigned short)9832;
short var_15 = (short)-3322;
unsigned short var_16 = (unsigned short)16895;
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
