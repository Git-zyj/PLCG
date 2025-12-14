#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)240;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-32542;
int var_9 = -1492880196;
int zero = 0;
unsigned short var_18 = (unsigned short)46811;
short var_19 = (short)-23035;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
