#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48752;
signed char var_3 = (signed char)-75;
_Bool var_4 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 5739315277207610614ULL;
signed char var_17 = (signed char)113;
short var_18 = (short)11392;
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
