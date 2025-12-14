#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1959616663;
signed char var_1 = (signed char)-38;
int var_2 = 590368829;
unsigned short var_3 = (unsigned short)33226;
unsigned long long int var_4 = 6068116208932146914ULL;
unsigned int var_5 = 767683681U;
signed char var_9 = (signed char)-126;
int zero = 0;
short var_13 = (short)11931;
_Bool var_14 = (_Bool)1;
int var_15 = 1601380344;
int var_16 = -639519768;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
