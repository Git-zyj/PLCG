#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12202246362630801462ULL;
unsigned int var_1 = 596999934U;
unsigned int var_3 = 4123596087U;
unsigned long long int var_4 = 17271648645618271485ULL;
signed char var_5 = (signed char)43;
signed char var_8 = (signed char)-73;
unsigned long long int var_13 = 16444287786912157697ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)30109;
unsigned int var_15 = 3673814690U;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)59015;
signed char var_18 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
