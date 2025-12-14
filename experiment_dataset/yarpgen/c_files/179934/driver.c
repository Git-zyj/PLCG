#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
signed char var_3 = (signed char)4;
unsigned short var_4 = (unsigned short)30985;
short var_11 = (short)29213;
int var_12 = -450246424;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 839044982U;
_Bool var_15 = (_Bool)1;
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
