#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11649;
short var_1 = (short)7729;
signed char var_2 = (signed char)86;
unsigned short var_4 = (unsigned short)44653;
int var_5 = 535730160;
unsigned int var_8 = 1470118460U;
unsigned int var_9 = 3805656979U;
unsigned long long int var_12 = 9971430740716824221ULL;
unsigned long long int var_14 = 2939499780009670901ULL;
short var_15 = (short)-5135;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -17187498;
void init() {
}

void checksum() {
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
