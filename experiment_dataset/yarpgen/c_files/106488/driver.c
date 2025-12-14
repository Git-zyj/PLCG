#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3742827438U;
signed char var_3 = (signed char)-71;
short var_4 = (short)-7146;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 183151987;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
