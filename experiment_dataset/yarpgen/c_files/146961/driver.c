#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)64729;
unsigned long long int var_8 = 8139333962596228650ULL;
unsigned long long int var_15 = 15964281538034833869ULL;
int zero = 0;
signed char var_16 = (signed char)-66;
unsigned short var_17 = (unsigned short)28768;
unsigned long long int var_18 = 18342951246517546074ULL;
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
