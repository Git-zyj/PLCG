#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45626;
short var_1 = (short)590;
unsigned char var_2 = (unsigned char)209;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)12509;
short var_8 = (short)14653;
int var_9 = 731013168;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)79;
unsigned char var_14 = (unsigned char)10;
int zero = 0;
signed char var_16 = (signed char)75;
signed char var_17 = (signed char)11;
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
