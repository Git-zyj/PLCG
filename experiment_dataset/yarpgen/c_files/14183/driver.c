#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)110;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)205;
unsigned short var_7 = (unsigned short)14213;
long long int var_9 = 5907386431789602436LL;
long long int var_16 = -8125926975970481594LL;
int zero = 0;
short var_20 = (short)-20841;
unsigned char var_21 = (unsigned char)4;
unsigned int var_22 = 4116472537U;
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
