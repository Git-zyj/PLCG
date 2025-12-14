#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31934;
signed char var_12 = (signed char)-89;
int var_13 = 1807620500;
int zero = 0;
long long int var_19 = -5205901991200717726LL;
signed char var_20 = (signed char)(-127 - 1);
short var_21 = (short)-3537;
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
