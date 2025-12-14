#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 821981242;
unsigned int var_3 = 2804464239U;
signed char var_4 = (signed char)77;
signed char var_7 = (signed char)-40;
int zero = 0;
signed char var_11 = (signed char)56;
unsigned short var_12 = (unsigned short)52536;
short var_13 = (short)-1688;
short var_14 = (short)-8080;
unsigned long long int var_15 = 15807494885957302108ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
