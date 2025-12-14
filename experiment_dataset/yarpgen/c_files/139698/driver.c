#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4202301411U;
int var_6 = -1155107503;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 645751931U;
unsigned int var_11 = 1331492366U;
signed char var_12 = (signed char)-51;
short var_13 = (short)-16792;
unsigned short var_14 = (unsigned short)27007;
int zero = 0;
unsigned char var_16 = (unsigned char)75;
unsigned short var_17 = (unsigned short)55347;
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
