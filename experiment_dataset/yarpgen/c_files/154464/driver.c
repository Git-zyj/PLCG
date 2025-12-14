#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2117307330U;
unsigned int var_3 = 342607948U;
unsigned short var_4 = (unsigned short)29248;
int var_5 = -1178341928;
unsigned int var_6 = 739167439U;
unsigned int var_8 = 2441682840U;
unsigned short var_12 = (unsigned short)42660;
unsigned short var_13 = (unsigned short)8658;
int var_14 = -1717003007;
int var_15 = -2065198115;
int zero = 0;
unsigned short var_16 = (unsigned short)52148;
unsigned short var_17 = (unsigned short)26601;
unsigned short var_18 = (unsigned short)60679;
unsigned short var_19 = (unsigned short)53669;
unsigned int var_20 = 2611764289U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
