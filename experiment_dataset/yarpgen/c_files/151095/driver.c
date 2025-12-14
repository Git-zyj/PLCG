#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2603025972U;
unsigned short var_1 = (unsigned short)59419;
unsigned int var_4 = 1251211110U;
unsigned short var_5 = (unsigned short)20628;
signed char var_9 = (signed char)-17;
int var_11 = 1141538581;
int zero = 0;
int var_12 = -2035998893;
unsigned int var_13 = 270463595U;
unsigned short var_14 = (unsigned short)37526;
unsigned int var_15 = 3026441972U;
void init() {
}

void checksum() {
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
