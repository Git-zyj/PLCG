#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12018;
unsigned int var_2 = 2988827981U;
signed char var_6 = (signed char)-12;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)78;
unsigned short var_15 = (unsigned short)56461;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-25329;
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
