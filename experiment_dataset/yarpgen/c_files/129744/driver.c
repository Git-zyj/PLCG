#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)46;
signed char var_4 = (signed char)-97;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-102;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)72;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-4498;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
