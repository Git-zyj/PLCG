#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
short var_3 = (short)-11551;
_Bool var_6 = (_Bool)0;
int var_7 = -660853407;
unsigned int var_9 = 2903361995U;
int zero = 0;
unsigned short var_11 = (unsigned short)52905;
int var_12 = -481405804;
unsigned int var_13 = 391218624U;
signed char var_14 = (signed char)-100;
short var_15 = (short)-8537;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
