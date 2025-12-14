#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -520785623;
unsigned int var_3 = 3511325706U;
signed char var_11 = (signed char)-103;
long long int var_13 = -3053798739762625138LL;
short var_14 = (short)-20976;
signed char var_15 = (signed char)-17;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2521345712U;
unsigned short var_18 = (unsigned short)56437;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
