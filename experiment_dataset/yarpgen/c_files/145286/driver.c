#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 162333641;
signed char var_4 = (signed char)-34;
unsigned int var_5 = 2192735533U;
short var_12 = (short)-905;
int zero = 0;
int var_18 = 454818404;
unsigned short var_19 = (unsigned short)49433;
unsigned short var_20 = (unsigned short)20284;
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
