#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2005355696;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 447683836U;
unsigned int var_12 = 1999792424U;
_Bool var_13 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 2818932151U;
int var_17 = -812635344;
unsigned int var_18 = 2105716064U;
unsigned char var_19 = (unsigned char)184;
int var_20 = 1828099550;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
