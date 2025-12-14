#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1319911790;
_Bool var_7 = (_Bool)1;
long long int var_8 = 4855229501372663657LL;
signed char var_11 = (signed char)56;
signed char var_13 = (signed char)21;
int zero = 0;
long long int var_15 = 3082925555961862380LL;
unsigned short var_16 = (unsigned short)6848;
void init() {
}

void checksum() {
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
