#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1690653300U;
unsigned short var_5 = (unsigned short)21731;
unsigned char var_6 = (unsigned char)106;
int var_10 = -720293400;
unsigned short var_13 = (unsigned short)53458;
unsigned int var_14 = 1270428922U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_18 = 12395466136374442857ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)35948;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
