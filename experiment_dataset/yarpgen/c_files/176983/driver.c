#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1177209350U;
unsigned long long int var_13 = 12636381519413506674ULL;
int zero = 0;
unsigned int var_19 = 855904267U;
unsigned short var_20 = (unsigned short)50872;
_Bool var_21 = (_Bool)1;
long long int var_22 = 4052320317812015422LL;
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
