#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-92;
short var_6 = (short)20010;
unsigned int var_9 = 2514019555U;
_Bool var_13 = (_Bool)0;
int var_15 = 14588993;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 4210323205U;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-61;
unsigned long long int var_22 = 7841472396861792921ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
