#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 755508536;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)166;
signed char var_5 = (signed char)96;
short var_6 = (short)-29268;
unsigned short var_7 = (unsigned short)10064;
short var_9 = (short)29424;
unsigned long long int var_10 = 7340330794920849859ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_13 = -8905194817446468136LL;
short var_14 = (short)7579;
unsigned int var_15 = 389188269U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
