#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
short var_2 = (short)12208;
unsigned int var_4 = 497166820U;
_Bool var_7 = (_Bool)1;
short var_13 = (short)-20335;
int zero = 0;
signed char var_15 = (signed char)(-127 - 1);
signed char var_16 = (signed char)-109;
short var_17 = (short)-28489;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
