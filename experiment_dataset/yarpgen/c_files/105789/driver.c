#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2589906046U;
short var_2 = (short)15512;
signed char var_6 = (signed char)-48;
unsigned long long int var_8 = 9537330035486383873ULL;
signed char var_13 = (signed char)31;
int zero = 0;
unsigned int var_18 = 1082635124U;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 905595257U;
void init() {
}

void checksum() {
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
