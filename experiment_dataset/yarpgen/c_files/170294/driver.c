#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 836033033;
long long int var_2 = -3908546232413687819LL;
short var_4 = (short)20094;
unsigned short var_6 = (unsigned short)56258;
unsigned int var_8 = 3809073491U;
unsigned short var_9 = (unsigned short)47386;
int var_10 = 541474964;
int zero = 0;
unsigned short var_12 = (unsigned short)11350;
unsigned short var_13 = (unsigned short)54539;
short var_14 = (short)31093;
int var_15 = -1840540994;
unsigned int var_16 = 4044510536U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
