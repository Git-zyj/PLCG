#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-70;
int var_13 = -97166162;
short var_15 = (short)1181;
unsigned long long int var_17 = 17825722984547546779ULL;
int zero = 0;
int var_20 = -713383755;
unsigned int var_21 = 4035015410U;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)29407;
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
