#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_13 = (unsigned char)203;
long long int var_14 = 4776189625428945470LL;
signed char var_15 = (signed char)54;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-7134;
signed char var_19 = (signed char)-79;
unsigned int var_20 = 900610896U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
