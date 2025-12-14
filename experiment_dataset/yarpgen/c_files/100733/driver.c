#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
unsigned short var_2 = (unsigned short)32150;
unsigned long long int var_3 = 600640211002795425ULL;
short var_5 = (short)9821;
unsigned int var_7 = 2053199727U;
unsigned int var_8 = 1120907717U;
int var_13 = 1145380898;
unsigned int var_14 = 1722045023U;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-13548;
unsigned long long int var_18 = 10560265786913323443ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
