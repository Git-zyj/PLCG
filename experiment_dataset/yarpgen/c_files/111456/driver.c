#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1783;
unsigned int var_2 = 3644577371U;
int var_4 = 1492931198;
unsigned int var_6 = 465621361U;
unsigned short var_10 = (unsigned short)26863;
unsigned int var_13 = 889606632U;
int zero = 0;
signed char var_19 = (signed char)-43;
int var_20 = -1062712925;
void init() {
}

void checksum() {
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
