#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1869432709U;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-30526;
int var_6 = 241721475;
short var_7 = (short)-24588;
unsigned short var_9 = (unsigned short)58030;
unsigned char var_11 = (unsigned char)218;
unsigned int var_12 = 3167284375U;
short var_15 = (short)-13213;
unsigned char var_17 = (unsigned char)209;
int zero = 0;
unsigned short var_19 = (unsigned short)16492;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)85;
unsigned short var_22 = (unsigned short)36211;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
