#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8045;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-7078;
unsigned int var_8 = 3082632827U;
long long int var_9 = 8361205077034806466LL;
long long int var_10 = -2555206594259648858LL;
signed char var_15 = (signed char)58;
unsigned int var_18 = 319272151U;
int zero = 0;
signed char var_20 = (signed char)103;
short var_21 = (short)-25096;
unsigned int var_22 = 1972356508U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
