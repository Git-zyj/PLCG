#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18884;
unsigned short var_2 = (unsigned short)50804;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)213;
unsigned short var_9 = (unsigned short)40119;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)218;
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
