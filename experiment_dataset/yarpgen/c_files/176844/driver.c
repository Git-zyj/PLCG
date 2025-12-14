#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2578506806U;
short var_3 = (short)15518;
short var_4 = (short)-1798;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 13921066252324631126ULL;
signed char var_12 = (signed char)-90;
unsigned int var_13 = 312845807U;
unsigned short var_14 = (unsigned short)16611;
short var_15 = (short)18120;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
