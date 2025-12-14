#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3301753320U;
unsigned short var_1 = (unsigned short)3812;
unsigned short var_3 = (unsigned short)799;
long long int var_4 = -6347359842193426870LL;
unsigned int var_6 = 2753900546U;
_Bool var_8 = (_Bool)0;
unsigned int var_13 = 3754623536U;
unsigned char var_14 = (unsigned char)52;
unsigned short var_15 = (unsigned short)35544;
int zero = 0;
unsigned long long int var_16 = 2773532398961060816ULL;
unsigned char var_17 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
