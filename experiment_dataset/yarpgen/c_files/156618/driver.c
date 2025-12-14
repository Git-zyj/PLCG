#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2205837191U;
short var_4 = (short)-7459;
short var_5 = (short)-6948;
unsigned int var_7 = 1246163174U;
unsigned int var_10 = 1920446888U;
unsigned char var_11 = (unsigned char)175;
short var_12 = (short)141;
int zero = 0;
short var_13 = (short)2893;
unsigned int var_14 = 2931588333U;
unsigned char var_15 = (unsigned char)250;
long long int var_16 = 5233953836459287621LL;
short var_17 = (short)14786;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
