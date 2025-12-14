#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_4 = 217364677U;
unsigned long long int var_5 = 3848245633469178124ULL;
unsigned short var_6 = (unsigned short)33652;
int zero = 0;
unsigned int var_10 = 3299160096U;
short var_11 = (short)6229;
long long int var_12 = -7550391053352165518LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
