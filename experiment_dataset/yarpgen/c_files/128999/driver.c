#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 689001587U;
signed char var_3 = (signed char)-34;
unsigned int var_7 = 2663876230U;
unsigned int var_8 = 2574093327U;
signed char var_9 = (signed char)-48;
int var_10 = 1148840377;
int var_12 = -1234379303;
short var_13 = (short)1539;
int zero = 0;
unsigned char var_15 = (unsigned char)119;
unsigned int var_16 = 2116853593U;
int var_17 = -819236253;
void init() {
}

void checksum() {
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
