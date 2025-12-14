#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
unsigned int var_1 = 3366265030U;
int var_3 = -1010232099;
int var_7 = 1936888460;
int var_11 = -1131839205;
unsigned int var_12 = 4019894106U;
int zero = 0;
unsigned int var_17 = 3010014670U;
unsigned char var_18 = (unsigned char)56;
short var_19 = (short)-824;
long long int var_20 = 8831826780156225198LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
