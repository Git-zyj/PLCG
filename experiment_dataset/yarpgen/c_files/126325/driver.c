#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2057016362;
signed char var_5 = (signed char)-42;
signed char var_7 = (signed char)16;
unsigned int var_8 = 2019400244U;
unsigned char var_12 = (unsigned char)246;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)237;
unsigned long long int var_18 = 8179069231019486397ULL;
signed char var_19 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
