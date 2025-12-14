#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -357167795;
signed char var_11 = (signed char)1;
unsigned int var_15 = 2853033133U;
unsigned int var_17 = 1694693943U;
int zero = 0;
unsigned short var_20 = (unsigned short)52783;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 863893335U;
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
