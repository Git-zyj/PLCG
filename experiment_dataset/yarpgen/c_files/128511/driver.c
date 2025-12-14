#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)19780;
short var_6 = (short)-2307;
int var_10 = 1992558075;
signed char var_13 = (signed char)(-127 - 1);
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 347043174;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
