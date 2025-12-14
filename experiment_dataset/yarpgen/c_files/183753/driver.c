#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3163545463U;
short var_1 = (short)-23432;
unsigned short var_2 = (unsigned short)52203;
unsigned short var_3 = (unsigned short)65447;
int var_4 = 1754115956;
unsigned char var_6 = (unsigned char)254;
unsigned short var_7 = (unsigned short)34102;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)27;
long long int var_12 = 6033137168148530963LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
