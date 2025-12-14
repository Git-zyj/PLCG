#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20089;
long long int var_2 = 8906273379468657426LL;
unsigned int var_3 = 4229404414U;
unsigned int var_4 = 2351206043U;
short var_6 = (short)24432;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)61139;
int zero = 0;
unsigned short var_15 = (unsigned short)49804;
signed char var_16 = (signed char)73;
signed char var_17 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
