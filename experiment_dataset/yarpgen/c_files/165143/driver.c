#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1304329691U;
long long int var_5 = 2077319771631431726LL;
short var_6 = (short)15520;
int zero = 0;
short var_19 = (short)12405;
unsigned short var_20 = (unsigned short)59679;
signed char var_21 = (signed char)29;
long long int var_22 = -5727242971148622792LL;
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
