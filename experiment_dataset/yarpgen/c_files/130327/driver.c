#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)50063;
int var_14 = -175637310;
signed char var_16 = (signed char)-67;
unsigned long long int var_17 = 4976849275698824597ULL;
int zero = 0;
signed char var_19 = (signed char)61;
long long int var_20 = -4184361847335899659LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2959095194U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
