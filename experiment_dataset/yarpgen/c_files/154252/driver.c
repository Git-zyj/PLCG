#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17755;
short var_4 = (short)1320;
unsigned short var_7 = (unsigned short)37370;
short var_8 = (short)13695;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-63;
int zero = 0;
short var_17 = (short)-23084;
unsigned int var_18 = 2294105056U;
unsigned short var_19 = (unsigned short)28300;
unsigned long long int var_20 = 17631139902059802734ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
