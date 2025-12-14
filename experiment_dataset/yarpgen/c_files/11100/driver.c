#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20213;
long long int var_9 = -3439281914026529993LL;
unsigned short var_10 = (unsigned short)40309;
signed char var_13 = (signed char)91;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_16 = (short)15045;
unsigned short var_17 = (unsigned short)49269;
void init() {
}

void checksum() {
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
