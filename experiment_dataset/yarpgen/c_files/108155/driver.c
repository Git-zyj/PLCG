#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)14309;
signed char var_6 = (signed char)-31;
unsigned int var_9 = 2923826121U;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)1895;
unsigned short var_12 = (unsigned short)86;
short var_13 = (short)11818;
int var_14 = -546973550;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
