#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17116;
int var_3 = 1298903483;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
int var_7 = -2133382477;
short var_8 = (short)4717;
int zero = 0;
signed char var_14 = (signed char)-126;
unsigned char var_15 = (unsigned char)72;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
