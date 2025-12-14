#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-581;
short var_3 = (short)-8733;
signed char var_4 = (signed char)92;
unsigned long long int var_6 = 4348451263875369641ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_16 = 4688426409407211576ULL;
int zero = 0;
int var_18 = 599240686;
int var_19 = -785320581;
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
