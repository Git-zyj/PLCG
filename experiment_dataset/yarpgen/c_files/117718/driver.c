#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)178;
unsigned long long int var_7 = 15869520076406916593ULL;
unsigned int var_16 = 689878784U;
int zero = 0;
unsigned long long int var_19 = 4689186268776487861ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
