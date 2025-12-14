#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5410;
int var_1 = -364911139;
signed char var_2 = (signed char)-103;
unsigned short var_4 = (unsigned short)64030;
int var_6 = 525896199;
unsigned short var_8 = (unsigned short)33860;
unsigned short var_11 = (unsigned short)18102;
int zero = 0;
unsigned short var_13 = (unsigned short)61022;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2649702218U;
void init() {
}

void checksum() {
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
