#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-1400;
unsigned char var_4 = (unsigned char)97;
unsigned char var_5 = (unsigned char)175;
unsigned short var_9 = (unsigned short)15670;
int zero = 0;
unsigned short var_10 = (unsigned short)28655;
unsigned int var_11 = 2535676871U;
_Bool var_12 = (_Bool)0;
short var_13 = (short)22570;
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
