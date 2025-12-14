#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)32491;
_Bool var_11 = (_Bool)0;
unsigned short var_15 = (unsigned short)9915;
int zero = 0;
signed char var_19 = (signed char)56;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)127;
int var_22 = -558300259;
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
