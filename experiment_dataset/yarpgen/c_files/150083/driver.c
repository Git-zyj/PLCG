#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 650509928;
unsigned long long int var_6 = 9875165352156960141ULL;
_Bool var_8 = (_Bool)0;
int var_9 = -491410796;
unsigned short var_12 = (unsigned short)21306;
short var_13 = (short)-2836;
unsigned long long int var_14 = 3724880696002683709ULL;
unsigned char var_15 = (unsigned char)219;
int zero = 0;
unsigned char var_17 = (unsigned char)96;
int var_18 = 1193846552;
unsigned char var_19 = (unsigned char)31;
unsigned short var_20 = (unsigned short)23745;
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
