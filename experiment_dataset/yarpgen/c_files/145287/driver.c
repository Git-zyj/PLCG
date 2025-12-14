#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13481;
unsigned int var_3 = 365754327U;
unsigned int var_5 = 3058323923U;
int var_8 = 938761181;
long long int var_11 = 7410741130791134811LL;
signed char var_12 = (signed char)71;
short var_13 = (short)20700;
unsigned int var_14 = 2233649739U;
long long int var_15 = 3565337049801521887LL;
short var_16 = (short)-11863;
int zero = 0;
signed char var_17 = (signed char)-6;
unsigned char var_18 = (unsigned char)118;
unsigned int var_19 = 3283052191U;
void init() {
}

void checksum() {
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
