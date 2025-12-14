#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)183;
short var_4 = (short)28506;
signed char var_5 = (signed char)-60;
unsigned int var_6 = 2733222089U;
unsigned int var_16 = 3922996973U;
int zero = 0;
long long int var_20 = 442258524818594550LL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
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
