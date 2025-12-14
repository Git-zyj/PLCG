#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1086949634;
int var_3 = 1688450415;
int var_5 = -827855844;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)103;
unsigned int var_19 = 2188491610U;
short var_20 = (short)-24922;
void init() {
}

void checksum() {
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
