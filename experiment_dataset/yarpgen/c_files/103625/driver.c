#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1974432984U;
unsigned int var_1 = 1956543279U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2184460302U;
short var_8 = (short)-17657;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2236976063U;
short var_15 = (short)31334;
int zero = 0;
unsigned int var_18 = 4114317328U;
short var_19 = (short)-8125;
void init() {
}

void checksum() {
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
