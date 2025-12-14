#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6940366176064808315LL;
short var_2 = (short)31839;
short var_5 = (short)12500;
unsigned long long int var_13 = 14968123090460404442ULL;
unsigned int var_14 = 945985696U;
int var_16 = -411131308;
int zero = 0;
long long int var_17 = -2793025467628056303LL;
int var_18 = -516456763;
unsigned long long int var_19 = 15207461971407819973ULL;
short var_20 = (short)-13594;
unsigned short var_21 = (unsigned short)42618;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
