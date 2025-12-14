#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16348;
short var_5 = (short)-9619;
int var_6 = -161259505;
long long int var_7 = -1477771082966503712LL;
signed char var_8 = (signed char)29;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)6;
short var_11 = (short)-10654;
short var_12 = (short)17722;
unsigned int var_13 = 10660781U;
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
