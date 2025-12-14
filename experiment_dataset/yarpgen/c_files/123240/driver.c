#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)50470;
signed char var_6 = (signed char)-34;
unsigned int var_7 = 1876680978U;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)19;
signed char var_15 = (signed char)-47;
int zero = 0;
long long int var_16 = -4185194481940689952LL;
int var_17 = -1594979354;
void init() {
}

void checksum() {
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
