#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)22233;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)1506;
unsigned char var_8 = (unsigned char)175;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-85;
unsigned long long int var_12 = 5695294758732805467ULL;
int zero = 0;
int var_14 = 1870026558;
unsigned char var_15 = (unsigned char)247;
void init() {
}

void checksum() {
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
