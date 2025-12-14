#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 11149634052447460295ULL;
unsigned short var_2 = (unsigned short)15704;
unsigned int var_3 = 4011133571U;
short var_5 = (short)-10209;
short var_6 = (short)23295;
int var_7 = -1639816531;
unsigned char var_8 = (unsigned char)137;
signed char var_9 = (signed char)80;
int var_11 = 1954379558;
unsigned short var_12 = (unsigned short)63271;
int zero = 0;
unsigned char var_14 = (unsigned char)110;
unsigned short var_15 = (unsigned short)38484;
_Bool var_16 = (_Bool)1;
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
