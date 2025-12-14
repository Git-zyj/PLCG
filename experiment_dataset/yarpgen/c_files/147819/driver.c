#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)10815;
long long int var_6 = -1934576310564153720LL;
unsigned int var_9 = 3230558355U;
int var_12 = 1757354498;
long long int var_13 = -3777276981498842878LL;
unsigned short var_15 = (unsigned short)30486;
unsigned short var_16 = (unsigned short)31715;
int zero = 0;
signed char var_18 = (signed char)-31;
unsigned int var_19 = 3713549418U;
unsigned short var_20 = (unsigned short)18624;
unsigned long long int var_21 = 3053262395689682859ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
