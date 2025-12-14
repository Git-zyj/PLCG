#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3291257821U;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)26767;
signed char var_7 = (signed char)-24;
int zero = 0;
unsigned short var_10 = (unsigned short)12445;
unsigned int var_11 = 1906856055U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
