#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
signed char var_1 = (signed char)37;
unsigned int var_7 = 4153583400U;
_Bool var_8 = (_Bool)1;
long long int var_10 = 5020771031105993370LL;
int zero = 0;
long long int var_11 = 7023829905153114086LL;
unsigned short var_12 = (unsigned short)35792;
signed char var_13 = (signed char)-87;
unsigned short var_14 = (unsigned short)6242;
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
