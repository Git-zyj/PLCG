#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-98;
_Bool var_5 = (_Bool)1;
long long int var_7 = -3222840455757340373LL;
unsigned int var_11 = 1093961309U;
short var_12 = (short)17068;
unsigned int var_14 = 3583514259U;
int zero = 0;
signed char var_15 = (signed char)-9;
int var_16 = -1647608808;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
