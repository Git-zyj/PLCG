#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9397346285657838438ULL;
short var_2 = (short)18102;
_Bool var_4 = (_Bool)0;
short var_6 = (short)28055;
signed char var_7 = (signed char)38;
int var_11 = -558112460;
int var_13 = 497365656;
unsigned long long int var_16 = 5064721324304559288ULL;
short var_19 = (short)11719;
int zero = 0;
unsigned short var_20 = (unsigned short)39257;
unsigned int var_21 = 3718105228U;
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
