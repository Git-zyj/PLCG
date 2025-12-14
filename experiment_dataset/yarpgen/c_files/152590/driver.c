#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 1786165072130443398ULL;
int var_4 = -1995654164;
unsigned long long int var_5 = 13477445101543585222ULL;
long long int var_6 = -5409273076899835354LL;
signed char var_7 = (signed char)49;
int zero = 0;
short var_10 = (short)18408;
int var_11 = -1018808412;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
