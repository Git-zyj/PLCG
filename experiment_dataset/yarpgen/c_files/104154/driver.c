#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16232;
int var_2 = 1146220611;
unsigned char var_5 = (unsigned char)108;
short var_6 = (short)29456;
unsigned char var_8 = (unsigned char)148;
unsigned char var_13 = (unsigned char)151;
int zero = 0;
unsigned long long int var_15 = 9592166940098470659ULL;
_Bool var_16 = (_Bool)0;
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
