#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_8 = 667736944U;
unsigned int var_10 = 1017499734U;
short var_15 = (short)16963;
int zero = 0;
int var_16 = -1795529651;
unsigned short var_17 = (unsigned short)34685;
unsigned short var_18 = (unsigned short)22748;
signed char var_19 = (signed char)-118;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
