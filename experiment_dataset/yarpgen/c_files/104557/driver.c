#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -784532909;
signed char var_2 = (signed char)120;
_Bool var_6 = (_Bool)0;
short var_9 = (short)-9400;
unsigned short var_11 = (unsigned short)54754;
long long int var_13 = -3666531769969377693LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 644544158;
void init() {
}

void checksum() {
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
