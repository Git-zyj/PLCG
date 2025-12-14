#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)24044;
unsigned short var_11 = (unsigned short)62668;
_Bool var_12 = (_Bool)1;
signed char var_15 = (signed char)-102;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)37950;
void init() {
}

void checksum() {
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
