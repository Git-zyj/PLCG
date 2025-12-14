#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18081;
unsigned short var_3 = (unsigned short)35240;
unsigned char var_4 = (unsigned char)119;
signed char var_5 = (signed char)91;
short var_7 = (short)-7019;
unsigned short var_8 = (unsigned short)53896;
_Bool var_9 = (_Bool)0;
short var_10 = (short)29658;
unsigned int var_13 = 2128805703U;
int zero = 0;
unsigned int var_14 = 3549127628U;
unsigned char var_15 = (unsigned char)56;
long long int var_16 = -344027237797580995LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
