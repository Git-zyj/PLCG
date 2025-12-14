#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-23656;
signed char var_7 = (signed char)86;
int zero = 0;
unsigned long long int var_10 = 15739926289272158540ULL;
unsigned int var_11 = 718828763U;
_Bool var_12 = (_Bool)1;
short var_13 = (short)19083;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
