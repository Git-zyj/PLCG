#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9467;
short var_3 = (short)23013;
short var_4 = (short)-3020;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)25;
int zero = 0;
unsigned char var_10 = (unsigned char)101;
short var_11 = (short)12250;
int var_12 = -1680340865;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
