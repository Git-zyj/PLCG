#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47787;
unsigned int var_1 = 649739426U;
short var_2 = (short)-30701;
long long int var_5 = 27045999474458410LL;
long long int var_7 = 6807745906732364141LL;
signed char var_8 = (signed char)122;
long long int var_9 = -1357139884943669970LL;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 1568905029U;
signed char var_13 = (signed char)108;
unsigned int var_14 = 365201752U;
signed char var_15 = (signed char)-118;
int zero = 0;
unsigned int var_18 = 4068640057U;
short var_19 = (short)24830;
unsigned short var_20 = (unsigned short)44401;
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
