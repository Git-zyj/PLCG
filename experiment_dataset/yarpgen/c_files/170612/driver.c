#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10937379509701668413ULL;
int var_1 = -286658505;
long long int var_4 = 1505873925345331881LL;
signed char var_5 = (signed char)61;
signed char var_6 = (signed char)42;
unsigned short var_12 = (unsigned short)50545;
unsigned int var_13 = 2753022947U;
int zero = 0;
signed char var_15 = (signed char)-11;
unsigned long long int var_16 = 14818225161374906526ULL;
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
