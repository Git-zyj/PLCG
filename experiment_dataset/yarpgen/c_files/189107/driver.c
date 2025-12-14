#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)19361;
long long int var_6 = 6987666068430536240LL;
signed char var_11 = (signed char)-105;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1461853540U;
short var_20 = (short)-6809;
signed char var_21 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
