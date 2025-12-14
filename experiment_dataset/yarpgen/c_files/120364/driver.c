#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-120;
unsigned short var_4 = (unsigned short)40526;
int var_9 = 781355179;
unsigned short var_15 = (unsigned short)36051;
signed char var_16 = (signed char)89;
int zero = 0;
unsigned int var_17 = 1682130474U;
short var_18 = (short)27378;
signed char var_19 = (signed char)-46;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
