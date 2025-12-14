#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31129;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned int var_16 = 1810302926U;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)26302;
signed char var_22 = (signed char)43;
void init() {
}

void checksum() {
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
