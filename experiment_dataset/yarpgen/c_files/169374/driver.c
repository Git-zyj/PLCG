#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)10162;
signed char var_3 = (signed char)29;
unsigned short var_4 = (unsigned short)12741;
unsigned short var_5 = (unsigned short)20859;
long long int var_8 = -4345301364303679342LL;
unsigned short var_10 = (unsigned short)12210;
unsigned int var_11 = 595282635U;
unsigned long long int var_18 = 8821403118207656598ULL;
int zero = 0;
signed char var_19 = (signed char)116;
signed char var_20 = (signed char)98;
void init() {
}

void checksum() {
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
