#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2440761112U;
unsigned int var_2 = 3176105706U;
signed char var_3 = (signed char)-19;
signed char var_5 = (signed char)-114;
unsigned long long int var_6 = 699629681447588473ULL;
int var_12 = 96762464;
int var_14 = 1370451881;
int var_15 = -1808639752;
int zero = 0;
unsigned short var_16 = (unsigned short)12430;
long long int var_17 = -63969065887083037LL;
int var_18 = 1316145188;
unsigned int var_19 = 325244992U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
