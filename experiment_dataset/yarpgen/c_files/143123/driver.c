#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24996;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 868638333U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 11051790382457561875ULL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-21279;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
