#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1009880064;
_Bool var_3 = (_Bool)1;
short var_4 = (short)16638;
unsigned short var_5 = (unsigned short)46362;
long long int var_7 = -1798774574581275214LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 1320357670U;
unsigned char var_14 = (unsigned char)147;
int zero = 0;
unsigned int var_15 = 2477856547U;
short var_16 = (short)10247;
int var_17 = 770702878;
short var_18 = (short)-21540;
unsigned int var_19 = 155486489U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
