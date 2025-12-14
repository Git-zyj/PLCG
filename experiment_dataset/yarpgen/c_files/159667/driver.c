#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)99;
unsigned short var_5 = (unsigned short)42225;
short var_9 = (short)-28058;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)15140;
unsigned long long int var_21 = 12405661410308137690ULL;
void init() {
}

void checksum() {
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
