#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-61;
unsigned int var_5 = 2271212826U;
unsigned short var_8 = (unsigned short)56407;
_Bool var_9 = (_Bool)0;
unsigned int var_15 = 1913488759U;
short var_16 = (short)-14220;
int zero = 0;
unsigned char var_18 = (unsigned char)67;
unsigned long long int var_19 = 10829243796836824233ULL;
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
