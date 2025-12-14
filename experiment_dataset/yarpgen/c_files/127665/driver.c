#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -203835346;
unsigned short var_1 = (unsigned short)31692;
unsigned int var_3 = 1980574444U;
unsigned char var_4 = (unsigned char)55;
unsigned long long int var_6 = 14468337620752180699ULL;
unsigned int var_19 = 4195378549U;
int zero = 0;
short var_20 = (short)5127;
signed char var_21 = (signed char)44;
short var_22 = (short)-8556;
int var_23 = -1588210395;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
