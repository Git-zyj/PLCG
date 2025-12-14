#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2032117265;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)22421;
unsigned int var_5 = 2082650318U;
unsigned long long int var_7 = 18221595700329035975ULL;
int var_10 = -515828879;
int zero = 0;
short var_11 = (short)28043;
unsigned int var_12 = 1328333419U;
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
