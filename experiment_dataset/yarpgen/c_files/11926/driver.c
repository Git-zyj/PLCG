#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)73;
unsigned char var_5 = (unsigned char)85;
unsigned short var_8 = (unsigned short)25220;
short var_9 = (short)-650;
int zero = 0;
unsigned char var_10 = (unsigned char)164;
unsigned char var_11 = (unsigned char)220;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
