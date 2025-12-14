#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 2969166339U;
unsigned short var_4 = (unsigned short)59062;
unsigned long long int var_6 = 13782280544443391020ULL;
unsigned int var_7 = 3417744950U;
unsigned int var_8 = 763997262U;
unsigned short var_10 = (unsigned short)23098;
unsigned long long int var_11 = 18102590517760788326ULL;
signed char var_12 = (signed char)-11;
unsigned int var_13 = 2324527572U;
int zero = 0;
unsigned long long int var_14 = 4679267603338693225ULL;
signed char var_15 = (signed char)52;
short var_16 = (short)-13144;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
