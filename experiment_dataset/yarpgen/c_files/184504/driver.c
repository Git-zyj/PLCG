#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -654335738;
signed char var_1 = (signed char)-105;
unsigned short var_4 = (unsigned short)6796;
signed char var_7 = (signed char)-16;
int var_11 = 709964120;
int zero = 0;
signed char var_13 = (signed char)73;
short var_14 = (short)8282;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
