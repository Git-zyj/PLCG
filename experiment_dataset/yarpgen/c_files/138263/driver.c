#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 154868654;
short var_3 = (short)11849;
unsigned int var_4 = 806802256U;
int var_8 = 95829148;
int zero = 0;
short var_12 = (short)-15569;
signed char var_13 = (signed char)(-127 - 1);
short var_14 = (short)32045;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
