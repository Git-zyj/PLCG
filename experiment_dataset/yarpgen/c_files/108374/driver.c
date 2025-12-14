#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-13;
unsigned short var_3 = (unsigned short)65009;
unsigned char var_4 = (unsigned char)136;
unsigned short var_6 = (unsigned short)49542;
unsigned char var_11 = (unsigned char)43;
int zero = 0;
unsigned long long int var_13 = 15394038176153058160ULL;
long long int var_14 = 6944627943372338681LL;
_Bool var_15 = (_Bool)0;
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
