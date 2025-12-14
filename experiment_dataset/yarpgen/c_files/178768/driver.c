#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20479;
short var_3 = (short)-16195;
_Bool var_11 = (_Bool)0;
signed char var_14 = (signed char)-126;
int zero = 0;
signed char var_15 = (signed char)-96;
unsigned int var_16 = 3426185856U;
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
