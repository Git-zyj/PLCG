#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)14631;
short var_7 = (short)-26990;
unsigned char var_10 = (unsigned char)98;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)8762;
unsigned short var_18 = (unsigned short)52200;
unsigned int var_19 = 2040259141U;
long long int var_20 = -8052244990193182754LL;
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
