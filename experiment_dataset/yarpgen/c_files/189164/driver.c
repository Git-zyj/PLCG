#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_8 = (unsigned short)30397;
signed char var_10 = (signed char)-76;
_Bool var_15 = (_Bool)0;
short var_17 = (short)29767;
int zero = 0;
short var_18 = (short)26616;
unsigned short var_19 = (unsigned short)24279;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
