#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28271;
unsigned short var_2 = (unsigned short)46305;
unsigned int var_4 = 1558472730U;
int var_5 = -753055258;
signed char var_6 = (signed char)-94;
unsigned short var_9 = (unsigned short)13719;
short var_10 = (short)-7693;
int zero = 0;
short var_14 = (short)-24074;
unsigned short var_15 = (unsigned short)25545;
short var_16 = (short)-16365;
int var_17 = -1421890443;
short var_18 = (short)12513;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
