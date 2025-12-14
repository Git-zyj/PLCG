#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 131320695;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)8825;
short var_6 = (short)-25168;
unsigned short var_7 = (unsigned short)38900;
unsigned long long int var_8 = 5924859084114818771ULL;
signed char var_9 = (signed char)-70;
unsigned short var_11 = (unsigned short)3511;
int zero = 0;
unsigned long long int var_12 = 1761326118942629257ULL;
unsigned long long int var_13 = 18073501458762690092ULL;
short var_14 = (short)29926;
signed char var_15 = (signed char)-23;
int var_16 = -1204866760;
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
