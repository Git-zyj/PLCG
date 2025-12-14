#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)-16;
unsigned short var_16 = (unsigned short)24318;
unsigned int var_17 = 1183941923U;
int zero = 0;
unsigned short var_20 = (unsigned short)9106;
int var_21 = -1812690081;
unsigned short var_22 = (unsigned short)56228;
unsigned short var_23 = (unsigned short)28044;
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
