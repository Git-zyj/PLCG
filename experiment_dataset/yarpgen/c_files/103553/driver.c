#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13640;
unsigned short var_4 = (unsigned short)35456;
signed char var_10 = (signed char)-39;
unsigned short var_11 = (unsigned short)32786;
_Bool var_14 = (_Bool)1;
short var_15 = (short)13701;
int zero = 0;
unsigned long long int var_16 = 147646556807102507ULL;
unsigned short var_17 = (unsigned short)38213;
unsigned int var_18 = 1244410157U;
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
