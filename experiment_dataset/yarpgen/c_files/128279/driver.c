#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3555909484811865422LL;
_Bool var_4 = (_Bool)1;
long long int var_6 = -6907940308558201186LL;
unsigned short var_8 = (unsigned short)30569;
int var_11 = -636380276;
short var_12 = (short)28962;
unsigned char var_13 = (unsigned char)198;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -1486485566737243031LL;
_Bool var_18 = (_Bool)0;
int var_19 = 1867437043;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
