#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-68;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-83;
int var_11 = 1137601546;
unsigned long long int var_12 = 3962315510009042357ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-15553;
short var_16 = (short)-3123;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
