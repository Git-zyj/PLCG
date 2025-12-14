#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 485955723;
unsigned char var_2 = (unsigned char)139;
unsigned int var_4 = 2668566936U;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)36735;
unsigned long long int var_8 = 4321318321494261402ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)7315;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)74;
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
