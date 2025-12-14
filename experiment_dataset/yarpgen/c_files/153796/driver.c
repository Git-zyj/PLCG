#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17353390220481567154ULL;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)54242;
int zero = 0;
long long int var_12 = 6309735027985154002LL;
signed char var_13 = (signed char)-55;
signed char var_14 = (signed char)122;
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
