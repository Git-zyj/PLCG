#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_5 = (unsigned short)45563;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-24928;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)25;
int zero = 0;
short var_19 = (short)-11713;
unsigned long long int var_20 = 4900960297214161751ULL;
void init() {
}

void checksum() {
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
