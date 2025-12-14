#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19478;
unsigned long long int var_5 = 15968328148366596621ULL;
_Bool var_7 = (_Bool)1;
signed char var_14 = (signed char)119;
unsigned int var_17 = 3170552060U;
int zero = 0;
unsigned int var_18 = 1930747422U;
unsigned int var_19 = 3109351943U;
unsigned int var_20 = 2326968059U;
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
