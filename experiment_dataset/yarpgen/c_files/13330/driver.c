#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -743068383;
short var_3 = (short)16418;
unsigned long long int var_4 = 4722758152994339253ULL;
unsigned char var_6 = (unsigned char)31;
unsigned int var_9 = 3729992693U;
unsigned long long int var_11 = 3863769860284407332ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)64069;
long long int var_16 = -7762814435938847763LL;
int var_18 = 1663381616;
int zero = 0;
unsigned int var_20 = 1759778629U;
unsigned char var_21 = (unsigned char)184;
unsigned short var_22 = (unsigned short)29712;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
