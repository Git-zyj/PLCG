#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)30;
signed char var_1 = (signed char)-84;
unsigned char var_2 = (unsigned char)12;
unsigned int var_4 = 3026591700U;
int var_11 = 2130010576;
int zero = 0;
unsigned long long int var_14 = 14380888580021212942ULL;
_Bool var_15 = (_Bool)1;
int var_16 = 1350373907;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
