#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)32;
unsigned short var_4 = (unsigned short)58870;
unsigned short var_6 = (unsigned short)47541;
signed char var_7 = (signed char)23;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)17;
unsigned int var_11 = 3166211341U;
int var_12 = 1737379871;
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
