#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6189374777790975722LL;
long long int var_3 = 1989127334598827778LL;
unsigned short var_4 = (unsigned short)13576;
long long int var_6 = -5450648535423831322LL;
long long int var_7 = 1100217761842438037LL;
unsigned short var_8 = (unsigned short)6438;
unsigned short var_9 = (unsigned short)19444;
short var_10 = (short)-26851;
_Bool var_11 = (_Bool)1;
short var_12 = (short)31337;
unsigned char var_14 = (unsigned char)250;
unsigned short var_16 = (unsigned short)12802;
long long int var_17 = -1712275470700995761LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 15854425666281202174ULL;
void init() {
}

void checksum() {
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
