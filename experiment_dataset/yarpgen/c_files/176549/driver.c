#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13178;
short var_5 = (short)-11852;
signed char var_7 = (signed char)-66;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-1;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = -465686641;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
