#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12532730989047416134ULL;
int var_2 = 801474348;
short var_4 = (short)6729;
_Bool var_7 = (_Bool)1;
short var_8 = (short)31684;
int zero = 0;
unsigned short var_11 = (unsigned short)54140;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)36248;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
