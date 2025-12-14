#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23553;
unsigned char var_2 = (unsigned char)76;
signed char var_3 = (signed char)2;
int var_6 = 826664715;
int var_9 = 2092202526;
unsigned short var_10 = (unsigned short)27034;
signed char var_14 = (signed char)-18;
unsigned int var_16 = 787192031U;
int zero = 0;
unsigned char var_17 = (unsigned char)148;
unsigned short var_18 = (unsigned short)58739;
unsigned short var_19 = (unsigned short)25652;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
