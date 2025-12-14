#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28099;
_Bool var_8 = (_Bool)0;
long long int var_10 = -3099910021401767475LL;
long long int var_13 = -421669503840938419LL;
signed char var_14 = (signed char)6;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-48;
void init() {
}

void checksum() {
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
