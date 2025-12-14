#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39539;
unsigned short var_3 = (unsigned short)32071;
unsigned int var_4 = 720163452U;
_Bool var_5 = (_Bool)1;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-104;
signed char var_17 = (signed char)-71;
unsigned short var_18 = (unsigned short)40783;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2704230166U;
unsigned int var_21 = 2640292142U;
unsigned short var_22 = (unsigned short)28814;
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
