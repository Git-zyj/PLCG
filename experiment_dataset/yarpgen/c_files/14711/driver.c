#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_5 = (unsigned char)9;
unsigned long long int var_6 = 14946336252476476784ULL;
unsigned char var_7 = (unsigned char)124;
unsigned long long int var_10 = 4400750141388414091ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)46;
signed char var_13 = (signed char)28;
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
