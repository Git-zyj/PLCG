#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2080505166404035298LL;
long long int var_6 = -6106368480932080153LL;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-30967;
signed char var_16 = (signed char)12;
long long int var_17 = 891323040734505525LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
