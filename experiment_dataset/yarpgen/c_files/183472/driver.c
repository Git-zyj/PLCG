#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_8 = -39973432;
signed char var_13 = (signed char)100;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)10;
unsigned char var_20 = (unsigned char)17;
unsigned short var_21 = (unsigned short)56791;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
