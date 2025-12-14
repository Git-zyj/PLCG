#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)14504;
int var_5 = 1835665641;
signed char var_8 = (signed char)-106;
unsigned long long int var_10 = 16989645245394906754ULL;
unsigned int var_14 = 2980038833U;
signed char var_16 = (signed char)-39;
int zero = 0;
unsigned int var_20 = 3796880025U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)31461;
void init() {
}

void checksum() {
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
