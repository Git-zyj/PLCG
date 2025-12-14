#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)44111;
unsigned int var_6 = 2055615783U;
unsigned int var_7 = 4150920242U;
long long int var_8 = 4330044989944994735LL;
long long int var_9 = -1120970129409936809LL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)38;
int zero = 0;
unsigned char var_13 = (unsigned char)196;
unsigned short var_14 = (unsigned short)64248;
void init() {
}

void checksum() {
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
