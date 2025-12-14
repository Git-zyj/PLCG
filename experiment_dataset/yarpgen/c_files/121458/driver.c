#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
unsigned short var_1 = (unsigned short)18350;
int var_5 = -1509760556;
unsigned char var_6 = (unsigned char)54;
signed char var_8 = (signed char)8;
unsigned short var_12 = (unsigned short)1231;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 10292366425573844823ULL;
long long int var_18 = 2049011120344669992LL;
int var_19 = 316243136;
void init() {
}

void checksum() {
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
