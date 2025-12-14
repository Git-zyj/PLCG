#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_9 = -6471240064860414349LL;
unsigned long long int var_10 = 12603385760282556569ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)19;
signed char var_13 = (signed char)-68;
short var_14 = (short)8148;
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
