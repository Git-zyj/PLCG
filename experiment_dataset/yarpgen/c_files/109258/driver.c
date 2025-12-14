#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 488266695U;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1841012796U;
unsigned short var_3 = (unsigned short)14505;
unsigned int var_4 = 279814984U;
unsigned short var_5 = (unsigned short)27175;
unsigned char var_8 = (unsigned char)85;
unsigned int var_9 = 3939541090U;
unsigned short var_10 = (unsigned short)21180;
unsigned short var_11 = (unsigned short)24362;
unsigned short var_13 = (unsigned short)23596;
int zero = 0;
int var_14 = -1929921412;
unsigned int var_15 = 3202531402U;
void init() {
}

void checksum() {
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
