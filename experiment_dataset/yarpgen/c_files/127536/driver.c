#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2253626630U;
_Bool var_4 = (_Bool)0;
short var_8 = (short)31517;
unsigned short var_10 = (unsigned short)15190;
int zero = 0;
signed char var_14 = (signed char)55;
short var_15 = (short)32716;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-11766;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
