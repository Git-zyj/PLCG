#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)649;
unsigned int var_6 = 140793464U;
unsigned short var_10 = (unsigned short)40343;
signed char var_14 = (signed char)42;
int zero = 0;
unsigned char var_18 = (unsigned char)173;
_Bool var_19 = (_Bool)0;
int var_20 = -1091265774;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
