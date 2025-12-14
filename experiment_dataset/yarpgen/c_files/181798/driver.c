#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int var_8 = -1828532249;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)97;
signed char var_22 = (signed char)-101;
short var_23 = (short)10852;
signed char var_24 = (signed char)-123;
signed char var_25 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
