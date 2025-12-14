#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -175152849;
long long int var_7 = -5922878872596464805LL;
signed char var_8 = (signed char)-83;
_Bool var_11 = (_Bool)0;
short var_12 = (short)8183;
unsigned short var_14 = (unsigned short)17158;
int zero = 0;
unsigned int var_18 = 1085609445U;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
