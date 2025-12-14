#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)41;
short var_2 = (short)11473;
short var_12 = (short)8968;
unsigned int var_14 = 3703287060U;
unsigned int var_16 = 971447364U;
unsigned short var_19 = (unsigned short)24668;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
