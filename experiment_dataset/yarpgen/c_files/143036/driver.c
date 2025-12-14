#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_5 = (unsigned short)48642;
unsigned int var_12 = 2564760441U;
_Bool var_16 = (_Bool)0;
unsigned char var_18 = (unsigned char)231;
int zero = 0;
unsigned short var_20 = (unsigned short)54196;
unsigned long long int var_21 = 17636858422498716727ULL;
signed char var_22 = (signed char)117;
int var_23 = 670466274;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
