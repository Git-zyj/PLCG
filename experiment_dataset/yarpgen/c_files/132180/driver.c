#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7645080286076828048ULL;
unsigned short var_2 = (unsigned short)26995;
signed char var_7 = (signed char)67;
int zero = 0;
unsigned int var_13 = 2636921225U;
unsigned char var_14 = (unsigned char)69;
unsigned int var_15 = 2400016306U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
