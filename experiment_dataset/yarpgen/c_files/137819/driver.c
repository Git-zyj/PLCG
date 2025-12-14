#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18552;
short var_6 = (short)-7386;
unsigned short var_7 = (unsigned short)60362;
unsigned short var_9 = (unsigned short)52690;
_Bool var_11 = (_Bool)1;
unsigned long long int var_15 = 18321073551042290726ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)22066;
short var_17 = (short)12275;
unsigned int var_18 = 1822397243U;
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
