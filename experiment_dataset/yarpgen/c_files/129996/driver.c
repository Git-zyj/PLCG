#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
short var_3 = (short)-11010;
int var_4 = 257595012;
unsigned short var_6 = (unsigned short)33682;
_Bool var_9 = (_Bool)0;
unsigned int var_13 = 1168559657U;
long long int var_14 = 5982559384033230463LL;
int zero = 0;
unsigned long long int var_15 = 10191060958844322723ULL;
unsigned char var_16 = (unsigned char)51;
void init() {
}

void checksum() {
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
