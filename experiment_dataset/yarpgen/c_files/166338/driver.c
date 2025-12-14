#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1952717796;
_Bool var_2 = (_Bool)1;
int var_4 = -1136513491;
unsigned char var_7 = (unsigned char)251;
signed char var_9 = (signed char)-53;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -1996053634521759586LL;
short var_12 = (short)23165;
short var_13 = (short)-31013;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
