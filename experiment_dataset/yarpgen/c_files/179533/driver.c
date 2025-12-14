#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 816532840095972104LL;
_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)28458;
signed char var_6 = (signed char)127;
unsigned short var_8 = (unsigned short)58533;
int zero = 0;
unsigned short var_11 = (unsigned short)24997;
int var_12 = 1616369025;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
