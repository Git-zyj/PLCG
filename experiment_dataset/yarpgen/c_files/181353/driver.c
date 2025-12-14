#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)252;
long long int var_3 = -8879421246275688453LL;
long long int var_6 = 6978653617973538159LL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-2460;
unsigned short var_10 = (unsigned short)7505;
int zero = 0;
signed char var_14 = (signed char)89;
unsigned short var_15 = (unsigned short)3658;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
