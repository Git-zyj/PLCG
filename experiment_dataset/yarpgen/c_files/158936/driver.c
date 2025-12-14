#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)(-127 - 1);
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)1453;
signed char var_11 = (signed char)105;
int zero = 0;
signed char var_12 = (signed char)48;
signed char var_13 = (signed char)-60;
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
