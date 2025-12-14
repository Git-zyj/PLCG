#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)70;
long long int var_6 = -6943205061236906799LL;
unsigned char var_7 = (unsigned char)20;
_Bool var_8 = (_Bool)1;
short var_11 = (short)1130;
int var_12 = 1958438366;
int zero = 0;
unsigned char var_14 = (unsigned char)77;
unsigned long long int var_15 = 5306268535232470246ULL;
unsigned char var_16 = (unsigned char)244;
int var_17 = 1336639129;
unsigned char var_18 = (unsigned char)243;
void init() {
}

void checksum() {
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
