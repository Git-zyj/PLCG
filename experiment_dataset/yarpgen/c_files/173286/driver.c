#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_5 = (unsigned char)207;
short var_6 = (short)-16913;
unsigned short var_10 = (unsigned short)3968;
unsigned long long int var_13 = 1128036238386172754ULL;
long long int var_15 = 3695023454955806345LL;
unsigned short var_17 = (unsigned short)30536;
int zero = 0;
unsigned long long int var_18 = 17769518366094226210ULL;
unsigned int var_19 = 101055212U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
