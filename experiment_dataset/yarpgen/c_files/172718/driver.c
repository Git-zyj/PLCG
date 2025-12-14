#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)125;
int var_5 = -1108542532;
short var_6 = (short)20280;
unsigned char var_9 = (unsigned char)102;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 1164144930;
int var_14 = -2077852644;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
