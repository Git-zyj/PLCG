#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3423;
short var_2 = (short)31530;
short var_4 = (short)-31040;
short var_7 = (short)6475;
short var_8 = (short)23407;
short var_14 = (short)-5069;
unsigned int var_15 = 1773731013U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 406562237U;
unsigned int var_19 = 3455834534U;
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
