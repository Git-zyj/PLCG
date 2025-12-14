#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)74;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)32901;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 7389827749716438947ULL;
int zero = 0;
short var_15 = (short)-13930;
unsigned int var_16 = 3027710578U;
unsigned long long int var_17 = 13749835814908974600ULL;
void init() {
}

void checksum() {
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
