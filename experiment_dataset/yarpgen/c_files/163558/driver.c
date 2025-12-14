#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-122;
_Bool var_3 = (_Bool)1;
signed char var_8 = (signed char)-28;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)23263;
int var_17 = -1685623092;
signed char var_18 = (signed char)-119;
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
