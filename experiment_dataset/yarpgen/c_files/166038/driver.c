#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2905247481U;
signed char var_5 = (signed char)-36;
int var_8 = -334747762;
int var_9 = -993782634;
int zero = 0;
short var_12 = (short)21293;
long long int var_13 = 3046865681946201436LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
