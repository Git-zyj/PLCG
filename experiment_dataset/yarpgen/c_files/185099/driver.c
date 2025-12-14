#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)20;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)46855;
int var_6 = 2126516777;
unsigned char var_9 = (unsigned char)235;
short var_13 = (short)-7516;
short var_14 = (short)19127;
unsigned char var_15 = (unsigned char)218;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-17266;
unsigned short var_21 = (unsigned short)53634;
short var_22 = (short)-22069;
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
