#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)199;
unsigned char var_6 = (unsigned char)116;
unsigned long long int var_7 = 5801537699751214194ULL;
short var_8 = (short)-4178;
unsigned short var_9 = (unsigned short)43156;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_13 = -3109098556854654313LL;
short var_14 = (short)-16306;
int var_15 = -384988400;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
