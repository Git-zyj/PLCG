#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3889224167U;
short var_5 = (short)-29145;
signed char var_9 = (signed char)117;
signed char var_11 = (signed char)92;
short var_13 = (short)22674;
int zero = 0;
unsigned int var_20 = 1599878171U;
signed char var_21 = (signed char)-115;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
