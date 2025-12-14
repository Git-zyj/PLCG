#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1814315777695748452LL;
short var_3 = (short)-23459;
signed char var_4 = (signed char)-32;
unsigned long long int var_5 = 4518255783487702183ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)42756;
unsigned int var_14 = 148399U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
