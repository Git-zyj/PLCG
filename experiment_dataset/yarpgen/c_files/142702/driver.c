#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13760397037139440569ULL;
int var_2 = 272821442;
unsigned short var_3 = (unsigned short)2525;
signed char var_4 = (signed char)-12;
short var_8 = (short)-11400;
int zero = 0;
unsigned long long int var_11 = 11614850238230918230ULL;
unsigned short var_12 = (unsigned short)29954;
unsigned short var_13 = (unsigned short)47475;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
