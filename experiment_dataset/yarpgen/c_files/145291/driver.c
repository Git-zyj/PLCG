#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1075535820U;
unsigned char var_4 = (unsigned char)172;
unsigned int var_6 = 3447024632U;
short var_8 = (short)-28051;
unsigned short var_9 = (unsigned short)43915;
short var_10 = (short)18048;
unsigned int var_13 = 3398486069U;
signed char var_14 = (signed char)-26;
int zero = 0;
int var_16 = 1171141336;
unsigned int var_17 = 1263914707U;
unsigned int var_18 = 362334480U;
short var_19 = (short)25900;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
