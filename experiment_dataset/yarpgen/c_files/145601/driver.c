#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41609;
unsigned short var_3 = (unsigned short)37066;
_Bool var_5 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_17 = 8511287924254234569ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)42870;
unsigned short var_20 = (unsigned short)47624;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
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
