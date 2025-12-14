#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1397877984U;
unsigned short var_11 = (unsigned short)28817;
int zero = 0;
signed char var_20 = (signed char)77;
_Bool var_21 = (_Bool)0;
int var_22 = 533832140;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-29938;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
