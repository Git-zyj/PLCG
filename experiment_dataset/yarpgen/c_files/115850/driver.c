#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 3706740887658857842ULL;
int zero = 0;
unsigned long long int var_11 = 676817911347111921ULL;
long long int var_12 = 8849838124341742314LL;
unsigned int var_13 = 3664526956U;
unsigned int var_14 = 2721814311U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
