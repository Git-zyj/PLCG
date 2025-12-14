#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22291;
_Bool var_3 = (_Bool)0;
short var_5 = (short)12850;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-15155;
unsigned long long int var_8 = 12236918046175263873ULL;
short var_13 = (short)9154;
short var_15 = (short)7903;
int zero = 0;
short var_16 = (short)-9961;
signed char var_17 = (signed char)29;
unsigned int var_18 = 3518791603U;
void init() {
}

void checksum() {
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
