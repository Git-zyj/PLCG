#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
signed char var_1 = (signed char)-86;
short var_2 = (short)22729;
int var_4 = 2096412064;
signed char var_5 = (signed char)39;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)31044;
unsigned int var_11 = 539903776U;
int var_13 = -472132915;
unsigned long long int var_16 = 16269513990984465238ULL;
unsigned short var_17 = (unsigned short)59584;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)13125;
unsigned int var_20 = 635964268U;
signed char var_21 = (signed char)-52;
int var_22 = 1844321306;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
