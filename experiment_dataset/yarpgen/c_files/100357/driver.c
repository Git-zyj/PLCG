#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19034;
short var_3 = (short)21538;
signed char var_12 = (signed char)81;
unsigned int var_13 = 3133436680U;
_Bool var_14 = (_Bool)0;
int var_18 = 735571894;
int zero = 0;
unsigned int var_19 = 3482093985U;
unsigned int var_20 = 264906886U;
_Bool var_21 = (_Bool)1;
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
