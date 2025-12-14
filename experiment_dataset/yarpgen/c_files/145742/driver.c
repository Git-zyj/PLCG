#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_6 = 2113440729;
unsigned short var_8 = (unsigned short)37250;
unsigned int var_12 = 589776471U;
unsigned long long int var_19 = 13430013147422674441ULL;
int zero = 0;
short var_20 = (short)-19537;
unsigned int var_21 = 304644751U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
