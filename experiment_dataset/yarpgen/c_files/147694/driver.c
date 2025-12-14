#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17493775843533507596ULL;
unsigned short var_1 = (unsigned short)47558;
short var_8 = (short)-26851;
unsigned short var_10 = (unsigned short)1995;
unsigned short var_14 = (unsigned short)59419;
int zero = 0;
short var_17 = (short)2725;
unsigned short var_18 = (unsigned short)24531;
_Bool var_19 = (_Bool)1;
long long int var_20 = -6854348230152683684LL;
long long int var_21 = -455781512222066937LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
