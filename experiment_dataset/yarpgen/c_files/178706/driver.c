#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48686;
short var_4 = (short)-17933;
_Bool var_5 = (_Bool)1;
unsigned int var_13 = 3604512756U;
int var_14 = -1094592000;
unsigned int var_16 = 3850890240U;
int var_17 = 1449349183;
int zero = 0;
long long int var_19 = 2810475095925134252LL;
int var_20 = -511919676;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
