#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 11339366526653048056ULL;
unsigned short var_3 = (unsigned short)38510;
signed char var_5 = (signed char)12;
short var_6 = (short)11456;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)149;
int var_12 = -226827702;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
