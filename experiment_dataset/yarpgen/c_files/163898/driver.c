#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4223590597U;
short var_6 = (short)-9204;
unsigned short var_9 = (unsigned short)39;
unsigned short var_12 = (unsigned short)48445;
short var_13 = (short)-20822;
int zero = 0;
unsigned short var_14 = (unsigned short)14757;
signed char var_15 = (signed char)-65;
unsigned int var_16 = 2605504185U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
