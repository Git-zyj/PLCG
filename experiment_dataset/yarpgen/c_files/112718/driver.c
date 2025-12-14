#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2055107666;
long long int var_4 = -4920833443937522410LL;
unsigned short var_8 = (unsigned short)10368;
int zero = 0;
unsigned short var_11 = (unsigned short)62063;
unsigned int var_12 = 2754177932U;
int var_13 = -1975006303;
int var_14 = 1029437315;
unsigned short var_15 = (unsigned short)29164;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
