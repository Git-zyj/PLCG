#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)51921;
unsigned char var_4 = (unsigned char)238;
unsigned char var_5 = (unsigned char)59;
unsigned char var_7 = (unsigned char)37;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)243;
unsigned long long int var_12 = 10493626751798624180ULL;
unsigned short var_13 = (unsigned short)54295;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
