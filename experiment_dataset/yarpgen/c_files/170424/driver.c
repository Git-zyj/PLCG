#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1350;
signed char var_2 = (signed char)49;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
long long int var_5 = 8870217858869257783LL;
int var_6 = -428918535;
unsigned int var_8 = 2825216130U;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)27296;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
