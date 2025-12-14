#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15469;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)0;
long long int var_12 = -4220678598079659349LL;
signed char var_17 = (signed char)61;
int zero = 0;
signed char var_20 = (signed char)-82;
unsigned long long int var_21 = 7485544592566534631ULL;
int var_22 = 1142084706;
unsigned int var_23 = 4261072156U;
short var_24 = (short)-28086;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
