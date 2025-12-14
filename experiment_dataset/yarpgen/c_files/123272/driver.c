#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7747479613127764830LL;
long long int var_3 = -2524192908757913368LL;
unsigned short var_4 = (unsigned short)65214;
unsigned int var_8 = 620469886U;
unsigned int var_10 = 3639301436U;
unsigned long long int var_13 = 15397520819483894703ULL;
unsigned char var_14 = (unsigned char)125;
unsigned short var_18 = (unsigned short)63721;
int zero = 0;
short var_20 = (short)8362;
unsigned short var_21 = (unsigned short)19539;
signed char var_22 = (signed char)120;
short var_23 = (short)4935;
int var_24 = 1705627869;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
