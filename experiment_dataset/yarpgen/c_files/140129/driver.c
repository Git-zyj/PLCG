#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -873914866;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)45878;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-32;
unsigned int var_20 = 1747168551U;
int var_21 = 209242950;
unsigned long long int var_22 = 4440265039633745875ULL;
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
