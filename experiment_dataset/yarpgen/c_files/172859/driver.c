#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)4175;
unsigned int var_9 = 2428295671U;
_Bool var_14 = (_Bool)1;
signed char var_16 = (signed char)-119;
short var_17 = (short)-31570;
int zero = 0;
unsigned short var_18 = (unsigned short)26913;
int var_19 = 292620190;
void init() {
}

void checksum() {
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
