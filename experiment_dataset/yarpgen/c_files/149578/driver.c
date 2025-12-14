#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 749541800U;
unsigned int var_4 = 405923901U;
signed char var_5 = (signed char)32;
_Bool var_6 = (_Bool)0;
int var_12 = -458565493;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-7369;
void init() {
}

void checksum() {
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
